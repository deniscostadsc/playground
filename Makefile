.PHONY: \
	__error_if_environments_ndef \
	__error_if_folder_ndef \
	__run-build \
	__run-lint-build \
	__run-test-build \
	add-missing \
	check-tags \
	check-wrongs \
	clean \
	count-solutions \
	get-easiest-problems \
	lint \
	lint-fix \
	new-problem \
	run \
	test \
	wrong

SHELL = /bin/bash -euo pipefail

ifdef ENVIRONMENTS
LINT_ENVIRONMENTS := $(ENVIRONMENTS)
endif

ifndef ENVIRONMENTS
ENVIRONMENTS = $(shell find .docker -maxdepth 1 -name "*.Dockerfile" 2>/dev/null | sed 's|.*/||' | sed 's/\.Dockerfile//' | sort)
LINT_ENVIRONMENTS = $(shell find .docker/lint -name "*.Dockerfile" 2>/dev/null | sed 's|.*/||' | sed 's/\-lint.Dockerfile//' | sort)
endif

ifdef FOLDERS
	$(error This task does not support FOLDERS variable)
endif

FOLDER_EXISTS = 0
ifneq ("$(wildcard $(FOLDER))","")
    FOLDER_EXISTS = 1
endif

ifdef FOLDER
	ifeq ("$(FOLDER_EXISTS)","1")
		FOLDERS := $(shell find $(FOLDER) -name 'problem.md' | sed 's/problem.md//g' | sort)
	endif
else
	FOLDERS := $(shell find . -name 'problem.md' | sed 's/problem.md//g' | sort)
endif

DOCKER_RUN := docker run --rm -v $$(pwd):/code -u "$$(id -u):$$(id -g)"
DOCKER_BUILD := docker build -q -f

__error_if_environments_ndef:
ifndef ENVIRONMENTS
	$(error This task requires ENVIRONMENTS variable)
endif

__error_if_folder_ndef:
ifndef FOLDER
	$(error This task requires FOLDER variable)
endif

__run-build:
	@for environment in $(ENVIRONMENTS); do \
		$(DOCKER_BUILD) .docker/$$environment.Dockerfile -t $$environment .; \
	done

__run-lint-build:
	@for lint_environment in $(LINT_ENVIRONMENTS); do \
		$(DOCKER_BUILD) .docker/lint/$${lint_environment}-lint.Dockerfile -t $${lint_environment}-lint .; \
	done

__run-test-build:
	@$(DOCKER_BUILD) .docker/test/test.Dockerfile -t test .

add-missing: __error_if_folder_ndef
	@scripts/makefile/add-missing.sh $(FOLDER) "$(ENVIRONMENTS)"

check-tags:
	@scripts/makefile/check-tags.sh

check-wrongs:
	@scripts/makefile/check-wrongs.sh

clean:
	@find . -name '*.class' -delete
	@find . -name '*.cml' -delete
	@find . -name '*.cmo' -delete
	@find . -name '*.exe' -delete
	@find . -name '*.hi' -delete
	@find . -name '*.o' -delete
	@find . -name '*.out' -delete
	@find . -name '*.res' -delete
	@find . -name '*.s' -delete
	@find . -name 'compiledFromTSFile.js' -delete
	@find . -name 'Main.java' -delete
	@find . -name 'main.kt' -delete
	@find . -name 'result-*.txt' -delete
	@find . -type d -name "META-INF" -exec rm -rf {} +
	@find solutions -type d -name "\?" -exec rm -rf {} +
	@rm -rf \? || true

count-solutions:
	@./scripts/makefile/count-solutions.sh

get-easiest-problems:
	@./scripts/makefile/get-easiest-problems.sh

lint: __run-lint-build
	@for lint_environment in $(LINT_ENVIRONMENTS); do \
		$(DOCKER_RUN) $${lint_environment}-lint; \
	done

lint-fix: __run-lint-build
	@for lint_environment in $(LINT_ENVIRONMENTS); do \
		$(DOCKER_RUN) -e LINT_FIX=1 $${lint_environment}-lint;\
	done

new-problem: __error_if_folder_ndef __error_if_environments_ndef
	@scripts/makefile/new-problem.sh $(FOLDER) "$(ENVIRONMENTS)"

run: clean __run-build
	@scripts/makefile/run-problems.sh "$(FOLDERS)" "$(ENVIRONMENTS)" "$(DOCKER_RUN)"

test: __run-test-build
	@$(DOCKER_RUN) test

wrong:
	@find . -name 'WRONG' | sort
