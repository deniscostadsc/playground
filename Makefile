.PHONY: \
	__clj-lint \
	__clj-lint-build \
	__cpp-format-code \
	__cpp-lint \
	__cpp-lint-build \
	__go_lint \
	__js-lint-build \
	__js-format-code \
	__js-lint \
	__py-format-code \
	__py-lint \
	__py-lint-build \
	__run_build \
	__shell-lint \
	__shell-lint-build \
	clean \
	format-code \
	lint \
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

# don't add SQL to the LANGUAGE var
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
	$(SCALA)

ifdef FOLDER
FOLDERS := $(shell find $(FOLDER) -name 'problem.txt' | sed 's/problem.txt//g' | sort)
else
FOLDERS := $(shell find . -name 'problem.txt' | sed 's/problem.txt//g' | sort)
endif

DOCKER_RUN := docker run -v $$(pwd):/code -u "$$(id -u):$$(id -g)"
DOCKER_BUILD := docker build -q -f

__clj-lint: __clj-lint-build
	@$(DOCKER_RUN) $(CLJ)-lint ./scripts/clj-lint.sh

__clj-lint-build:
	@$(DOCKER_BUILD) .docker/lint/$(CLJ)-lint.Dockerfile -t $(CLJ)-lint .

__cpp-format-code: __cpp-lint-build
	@$(DOCKER_RUN) $(CPP)-lint \
			clang-format-7 \
				--style=file \
				-i \
				$$(find . -name '*.cpp') \
				$$(find . -name '*.c')

__cpp-lint: __cpp-lint-build
	@$(DOCKER_RUN) $(CPP)-lint \
		cpplint \
			--quiet \
			--recursive \
			--filter="-legal/copyright,-runtime/int,-runtime/arrays" .
	@$(DOCKER_RUN) $(CPP)-lint \
		scripts/run-clang-format.py \
			--clang-format-executable=clang-format-7 \
			-r .

__cpp-lint-build:
	@$(DOCKER_BUILD) .docker/lint/$(CPP)-lint.Dockerfile -t $(CPP)-lint .

__go-lint-build:
	@$(DOCKER_BUILD) .docker/$(GO).Dockerfile -t $(GO) .

__go-lint: __go-lint-build
	@$(DOCKER_RUN) $(GO) [ "$$(gofmt -l . | wc -l)" -eq 0 ]

__go-format-code: __go-lint-build
	@$(DOCKER_RUN) $(GO) gofmt -w .


__js-format-code: __js-build-lint
	@$(DOCKER_RUN) $(JS)-lint standard --fix

__js-lint: __js-lint-build
	@$(DOCKER_RUN) $(JS)-lint standard

__js-lint-build:
	@$(DOCKER_BUILD) .docker/lint/$(JS)-lint.Dockerfile -t $(JS)-lint .

__py-format-code: __py-lint-build
	@$(DOCKER_RUN) $(PY)-lint black .
	@$(DOCKER_RUN) $(PY)-lint isort .

__py-lint: __py-lint-build
	@$(DOCKER_RUN) $(PY)-lint black --check .
	@$(DOCKER_RUN) $(PY)-lint flake8
	@$(DOCKER_RUN) $(PY)-lint isort -c .

__py-lint-build:
	@$(DOCKER_BUILD) .docker/lint/$(PY)-lint.Dockerfile -t $(PY)-lint .

__run-build:
	@for language in $(LANGUAGES); do \
		$(DOCKER_BUILD) .docker/$$language.Dockerfile -t $$language .; \
	done

__shell-lint: __shell-lint-build
	@$(DOCKER_RUN) shell-lint shellcheck $$(find . -name '*.sh')

__shell-lint-build:
	@$(DOCKER_BUILD) .docker/lint/shell-lint.Dockerfile -t shell-lint .

clean:
	@find . -name '*.class' -delete
	@find . -name '*.cml' -delete
	@find . -name '*.cmo' -delete
	@find . -name '*.exe' -delete
	@find . -name '*.hi' -delete
	@find . -name '*.o' -delete
	@find . -name '*.out' -delete
	@find . -name 'result-*.txt' -delete
	@find . -type d -name "META-INF" -exec rm -rf {} +
	@find . -type d -name "\?" -exec rm -rf {} +

format-code: __cpp-format-code __go-format-code __js-format-code __py-format-code

lint: __clj-lint __cpp-lint __go-lint __js-lint __py-lint __shell-lint

run: __run-build
	@./scripts/run-problems.sh "$(FOLDERS)" "$(LANGUAGES)" "$(DOCKER_RUN)"

wrong:
	@(find . -name 'WRONG')
