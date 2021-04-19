.PHONY: \
	__cpp-format-code \
	__cpp-lint \
	__cpp-lint-build \
	__js-build-lint \
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
CPP = cpp
CS = cs
JS = js
PY = py

# don't add SQL to the LANGUAGE var
LANGUAGES = \
	$(C) \
	$(CPP) \
	$(CS) \
	$(JS) \
	$(PY)

ifdef FOLDER
FOLDERS := $(shell find $(FOLDER) -name 'problem.txt' | sed 's/problem.txt//g' | sort)
else
FOLDERS := $(shell find . -name 'problem.txt' | sed 's/problem.txt//g' | sort)
endif

DOCKER_RUN := docker run -v $(shell pwd):/code -u "$$(id -u):$$(id -g)"
DOCKER_BUILD := docker build -q -f

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
	@$(DOCKER_BUILD) .docker/$(CPP)-lint.Dockerfile -t $(CPP)-lint .

__js-build-lint:
	@$(DOCKER_BUILD) .docker/$(JS)-lint.Dockerfile -t $(JS)-lint .

__js-format-code: __js-build-lint
	@$(DOCKER_RUN) $(JS)-lint standard --fix

__js-lint: __js-build-lint
	@$(DOCKER_RUN) $(JS)-lint standard

__py-format-code: __py-lint-build
	@$(DOCKER_RUN) $(PY)-lint black .
	@$(DOCKER_RUN) $(PY)-lint isort .

__py-lint: __py-lint-build
	@$(DOCKER_RUN) $(PY)-lint black --check .
	@$(DOCKER_RUN) $(PY)-lint flake8
	@$(DOCKER_RUN) $(PY)-lint isort -c .

__py-lint-build:
	@$(DOCKER_BUILD) .docker/$(PY)-lint.Dockerfile -t $(PY)-lint .

__run-build:
	@for language in $(LANGUAGES); do \
		$(DOCKER_BUILD) .docker/$$language.Dockerfile -t $$language .; \
	done

__shell-lint: __shell-lint-build
	@$(DOCKER_RUN) shell-lint shellcheck $$(find . -name '*.sh')

__shell-lint-build:
	@$(DOCKER_BUILD) .docker/shell-lint.Dockerfile -t shell-lint .

clean:
	@find . -name 'result-*.txt' -delete
	@find . -name 'a.out' -delete
	@find . -name 'a.exe' -delete

format-code: __cpp-format-code __js-format-code __py-format-code

lint: __cpp-lint __js-lint __py-lint __shell-lint

run: __run-build
	@./scripts/run-problems.sh "$(FOLDERS)" "$(LANGUAGES)" "$(DOCKER_RUN)"

wrong:
	@(find . -name 'WRONG')
