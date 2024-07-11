.PHONY: \
	__run-build \
	__run-lint-build \
	check-tags \
	clean \
	languages \
	lint \
	lint-fix \
	new-problem \
	run \
	wrong

SHELL = /bin/bash -euo pipefail

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
SH = sh
SQL = sql

SUPPORTED_LANGUAGES = \
	$(C) \
	$(CPP) \
	$(CS) \
	$(DART) \
	$(GO) \
	$(HS) \
	$(JAVA) \
	$(JS) \
	$(LUA) \
	$(PHP) \
	$(PY) \
	$(R) \
	$(RB) \
	$(RS) \
	$(SQL)
# $(ML)
# $(PAS)
# $(SCALA)
# $(CLJ)

ifdef LANGUAGES
SUPPORTED_LANGUAGES := $(LANGUAGES)
endif

SUPPORTED_LINTS = \
	$(PY) \
	$(SH)
# $(C)
# $(SQL)
# $(CLJ)
# $(CPP)
# $(DART)
# $(GO)
# $(JS)

ifdef LINTS
SUPPORTED_LINTS := $(LINTS)
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

__run-build:
ifdef LANGUAGE
	$(error On run task, you should use LANGUAGES not LANGUAGE)
endif
	@for language in $(SUPPORTED_LANGUAGES); do \
		$(DOCKER_BUILD) .docker/$$language.Dockerfile -t $$language .; \
	done

__run-lint-build:
	@for language_lint in $(SUPPORTED_LINTS); do \
		$(DOCKER_BUILD) .docker/lint/$${language_lint}-lint.Dockerfile --platform linux/arm64 -t $${language_lint}-lint .; \
	done

check-tags:
	@scripts/check-tags.sh

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

lint: __run-lint-build
ifdef LANGUAGES
	$(error On lint task, you should use LINTS not LANGUAGES)
endif
	@for language_lint in $(SUPPORTED_LINTS); do \
		$(DOCKER_RUN) $${language_lint}-lint; \
	done

lint-fix: __run-lint-build
ifdef LANGUAGES
	$(error On lint-fix task, you should use LINTS not LANGUAGES)
endif
	@for language_lint in $(SUPPORTED_LINTS); do \
		$(DOCKER_RUN) -e LINT_FIX=1 $${language_lint}-lint;\
	done

new-problem:
ifdef LANGUAGES
	$(error On new-problem task, you should use LANGUAGE not LANGUAGES)
endif

ifndef FOLDER
	$(error You must specify a FOLDER variable to create a new problem)
endif

ifndef LANGUAGE
	$(error You must specify a LANGUAGE variable to create a new problem)
endif

	@mkdir -p $(FOLDER)
	@touch $(FOLDER)/{out.txt,problem.md,tags.txt,$(shell basename $(FOLDER)).$(LANGUAGE)}

ifeq ($(strip $(LANGUAGE)),sql)
	@touch $(FOLDER)/{schema.sql,drop-table.sql}
else
	@touch $(FOLDER)/in.txt
endif

run: clean __run-build
ifdef LANGUAGE
	$(error On run task, you should use LANGUAGES not LANGUAGE)
endif

	@scripts/run-problems.sh "$(FOLDERS)" "$(SUPPORTED_LANGUAGES)" "$(DOCKER_RUN)"

wrong:
	@find . -name 'WRONG' | sort
