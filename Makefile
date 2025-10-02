.PHONY: \
	__error_if_folder_ndef \
	__error_if_language_def \
	__error_if_language_ndef \
	__error_if_languages_def \
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

SUPPORTED_LANGUAGES = $(shell find .docker -maxdepth 1 -name "*.Dockerfile" 2>/dev/null | sed 's|.*/||' | sed 's/\.Dockerfile//' | sort)

ifdef LANGUAGES
SUPPORTED_LANGUAGES := $(LANGUAGES)
endif

SUPPORTED_LINTS = $(shell find .docker/lint -name "*.Dockerfile" 2>/dev/null | sed 's|.*/||' | sed 's/\-lint.Dockerfile//' | sort)

ifdef LINTS
SUPPORTED_LINTS := $(LINTS)
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

ifndef CHANGED_FILES
	CHANGED_FILES := $(shell find . -name 'problem.md' | sort)
endif

DOCKER_RUN := docker run --rm -v $$(pwd):/code -u "$$(id -u):$$(id -g)"
DOCKER_BUILD := docker build -q -f

__error_if_folder_ndef:
ifndef FOLDER
	$(error This task requires FOLDER variable)
endif

__error_if_language_def:
ifdef LANGUAGE
	$(error This task does not support LANGUAGE variable)
endif

__error_if_language_ndef:
ifndef LANGUAGE
	$(error This task requires LANGUAGE variable)
endif

__error_if_languages_def:
ifdef LANGUAGES
	$(error This task does not support LANGUAGES variable)
endif

__run-build:
	@for language in $(SUPPORTED_LANGUAGES); do \
		$(DOCKER_BUILD) .docker/$$language.Dockerfile -t $$language .; \
	done

__run-lint-build:
	@for language_lint in $(SUPPORTED_LINTS); do \
		$(DOCKER_BUILD) .docker/lint/$${language_lint}-lint.Dockerfile -t $${language_lint}-lint .; \
	done

__run-test-build:
	@$(DOCKER_BUILD) .docker/test/test.Dockerfile -t test .

add-missing: __error_if_folder_ndef
	@scripts/makefile/add-missing.sh $(FOLDER)

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

lint: __error_if_languages_def __error_if_language_def __run-lint-build
	@for language_lint in $(SUPPORTED_LINTS); do \
		$(DOCKER_RUN) $${language_lint}-lint; \
	done

lint-fix: __error_if_languages_def __error_if_language_def __run-lint-build
	@for language_lint in $(SUPPORTED_LINTS); do \
		$(DOCKER_RUN) -e LINT_FIX=1 $${language_lint}-lint;\
	done

new-problem: __error_if_folder_ndef __error_if_language_ndef __error_if_languages_def
	@scripts/makefile/new-problem.sh $(FOLDER) $(LANGUAGE)

run: __error_if_language_def clean __run-build
	@scripts/makefile/run-problems.sh "$(FOLDERS)" "$(SUPPORTED_LANGUAGES)" "$(DOCKER_RUN)"

test: __run-test-build
	@$(DOCKER_RUN) test

wrong:
	@find . -name 'WRONG' | sort
