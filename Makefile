.PHONY: \
	__c-build \
	__cpp-build \
	__cpp-format-code \
	__cpp-lint \
	__cpp-lint-build \
	__cs-build \
	__js-build \
	__js-build-lint \
	__js-format-code \
	__js-lint \
	__py-build \
	__py-format-code \
	__py-lint \
	__py-lint-build \
	__shell-lint \
	__shell-lint-build \
	__sql-build \
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
SQL = sql
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

__c-build:
	@$(DOCKER_BUILD) .docker/$(C).Dockerfile -t $(C) .

__cpp-build:
	@$(DOCKER_BUILD) .docker/$(CPP).Dockerfile -t $(CPP) .

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

__cs-build:
	@$(DOCKER_BUILD) .docker/$(CS).Dockerfile -t $(CS) .

__js-build:
	@$(DOCKER_BUILD) .docker/$(JS).Dockerfile -t $(JS) .

__js-build-lint:
	@$(DOCKER_BUILD) .docker/$(JS)-lint.Dockerfile -t $(JS)-lint .

__js-format-code: __js-build-lint
	@$(DOCKER_RUN) $(JS)-lint standard --fix

__js-lint: __js-build-lint
	@$(DOCKER_RUN) $(JS)-lint standard

__py-build:
	@$(DOCKER_BUILD) .docker/$(PY).Dockerfile -t $(PY) .

__py-format-code: __py-lint-build
	@$(DOCKER_RUN) $(PY)-lint black .
	@$(DOCKER_RUN) $(PY)-lint isort .

__py-lint: __py-lint-build
	@$(DOCKER_RUN) $(PY)-lint black --check .
	@$(DOCKER_RUN) $(PY)-lint flake8
	@$(DOCKER_RUN) $(PY)-lint isort -c .

__py-lint-build:
	@$(DOCKER_BUILD) .docker/$(PY)-lint.Dockerfile -t $(PY)-lint .

__shell-lint: __shell-lint-build
	@$(DOCKER_RUN) shell-lint \
		find . -name '*.sh' | xargs shellcheck

__shell-lint-build:
	@$(DOCKER_BUILD) .docker/shell-lint.Dockerfile -t shell-lint .

__sql-build:
	@$(DOCKER_BUILD) .docker/$(SQL).Dockerfile -t $(SQL) .

clean:
	@find . -name 'result*.txt' -delete
	@find . -name 'a.out' -delete
	@find . -name 'a.exe' -delete

format-code: __cpp-format-code __js-format-code __py-format-code

lint: __cpp-lint __py-lint __shell-lint

run: __c-build __cpp-build __cs-build __js-build __py-build __sql-build
	@./scripts/run-problems.sh "$(FOLDERS)" "$(LANGUAGES)" "$(DOCKER_RUN)"

wrong:
	@(find . -name 'WRONG')
