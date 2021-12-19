.PHONY: \
	__clj-lint \
	__clj-lint-build \
	__cpp-lint-fix \
	__cpp-lint \
	__cpp-lint-build \
	__dart-lint-fix \
	__dart-lint \
	__dart-lint-build \
	__go_lint \
	__js-lint-fix \
	__js-lint \
	__js-lint-build \
	__py-lint-fix \
	__py-lint \
	__py-lint-build \
	__py-lint-update-requirements \
	__run_build \
	__shell-lint \
	__shell-lint-build \
	check-tags \
	clean \
	languages \
	lint \
	lint-fix \
	new-problem \
	run \
	wrong

C = c
CLJ = clj
CPP = cpp
CS = cs
DART = dart
GO = go
HS = hs
JAVA = java
JS = js
KT = kt
LUA = lua
ML = ml
PAS = pas
PHP = php
PY = py
R = r
RB = rb
RS = rs
SCALA = scala
SQL = sql

LANGUAGES = \
	$(C) \
	$(CLJ) \
	$(CPP) \
	$(CS) \
	$(DART) \
	$(GO) \
	$(HS) \
	$(JAVA) \
	$(JS) \
	$(KT) \
	$(LUA) \
	$(ML) \
	$(PAS) \
	$(PHP) \
	$(PY) \
	$(R) \
	$(RB) \
	$(RS) \
	$(SCALA) \
	$(SQL)

ifdef LANGUAGE
LANGUAGES := $(LANGUAGE)
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

DOCKER_RUN := docker run -v $$(pwd):/code -u "$$(id -u):$$(id -g)"
DOCKER_BUILD := docker build -q -f

__clj-lint: __clj-lint-build
	@$(DOCKER_RUN) $(CLJ)-lint ./scripts/clj-lint.sh

__clj-lint-build:
	@$(DOCKER_BUILD) .docker/lint/$(CLJ)-lint.Dockerfile -t $(CLJ)-lint .

__cpp-lint-fix: __cpp-lint-build
	@$(DOCKER_RUN) $(CPP)-lint \
			clang-format \
				--style=file \
				-i \
				$$(find . -name '*.cpp') \
				$$(find . -name '*.c')

__cpp-lint: __cpp-lint-build
	@$(DOCKER_RUN) $(CPP)-lint \
		cpplint \
			--quiet \
			--recursive \
			--extensions=c \
			--filter="-legal/copyright,-runtime/arrays,-readability/casting" .
	@$(DOCKER_RUN) $(CPP)-lint \
		cpplint \
			--quiet \
			--recursive \
			--extensions=cpp \
			--filter="-legal/copyright,-runtime/arrays" .
	@$(DOCKER_RUN) $(CPP)-lint \
		scripts/run-clang-format.py \
			--clang-format-executable=clang-format \
			-r .

__cpp-lint-build:
	@$(DOCKER_BUILD) .docker/lint/$(CPP)-lint.Dockerfile -t $(CPP)-lint .

__dart-lint-fix: __dart-lint-build
	@$(DOCKER_RUN) $(DART)-lint dart format .

__dart-lint: __dart-lint-build
	@$(DOCKER_RUN) $(DART)-lint [ "$$(dart format -o none . | wc -l)" -eq 1 ]

__dart-lint-build:
	@$(DOCKER_BUILD) .docker/lint/$(DART)-lint.Dockerfile -t $(DART)-lint .

__go-lint-build:
	@$(DOCKER_BUILD) .docker/$(GO).Dockerfile -t $(GO) .

__go-lint: __go-lint-build
	@$(DOCKER_RUN) $(GO) [ "$$(gofmt -l . | wc -l)" -eq 0 ]

__go-lint-fix: __go-lint-build
	@$(DOCKER_RUN) $(GO) gofmt -w .

__js-lint-fix: __js-lint-build
	@$(DOCKER_RUN) $(JS)-lint standard --fix

__js-lint: __js-lint-build
	@$(DOCKER_RUN) $(JS)-lint standard

__js-lint-build:
	@$(DOCKER_BUILD) .docker/lint/$(JS)-lint.Dockerfile -t $(JS)-lint .

__py-lint-fix: __py-lint-build
	@$(DOCKER_RUN) $(PY)-lint blue .
	@$(DOCKER_RUN) $(PY)-lint isort .

__py-lint: __py-lint-build
	@$(DOCKER_RUN) $(PY)-lint blue --check .
	@$(DOCKER_RUN) $(PY)-lint flake8
	@$(DOCKER_RUN) $(PY)-lint isort -c .

__py-lint-build:
	@$(DOCKER_BUILD) .docker/lint/$(PY)-lint.Dockerfile -t $(PY)-lint .

__py-lint-update-requirements: __py-lint-build
	@$(DOCKER_RUN) $(PY)-lint scripts/update-python-requirements-ci.sh

__run-build:
	@for language in $(LANGUAGES); do \
		$(DOCKER_BUILD) .docker/$$language.Dockerfile -t $$language .; \
	done

__shell-lint: __shell-lint-build
	@$(DOCKER_RUN) shell-lint shellcheck $$(find . -name '*.sh')

__shell-lint-build:
	@$(DOCKER_BUILD) .docker/lint/shell-lint.Dockerfile -t shell-lint .

check-tags:
	@./scripts/check-tags.sh

clean:
	@find . -name '*.class' -delete
	@find . -name '*.cml' -delete
	@find . -name '*.cmo' -delete
	@find . -name '*.exe' -delete
	@find . -name '*.hi' -delete
	@find . -name '*.o' -delete
	@find . -name '*.out' -delete
	@find . -name 'Main.java' -delete
	@find . -name 'result-*.txt' -delete
	@find . -type d -name "META-INF" -exec rm -rf {} +
	@find . -type d -name "\?" -exec rm -rf {} +

languages:
	@./scripts/languages.sh

lint: __clj-lint __cpp-lint __go-lint __js-lint __py-lint __shell-lint

lint-fix: \
	__cpp-lint-fix \
	__dart-lint-fix \
	__go-lint-fix \
	__js-lint-fix \
	__py-lint-fix

new-problem:
ifdef FOLDER
	@mkdir -p $(FOLDER)
	@touch $(FOLDER)/{in.txt,out.txt,problem.md,tags.txt,$(shell basename $(FOLDER)).cpp}
else
	@echo "You must specify a FOLDER variable to create a new problem. See example bellow:"
	@echo ""
	@echo "make new-problem FOLDER=solutions/uri/1000"
	@echo ""
endif

run: clean __run-build
	@./scripts/run-problems.sh "$(FOLDERS)" "$(LANGUAGES)" "$(DOCKER_RUN)"

wrong:
	@find . -name 'WRONG' | sort
