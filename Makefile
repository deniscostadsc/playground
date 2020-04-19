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
FOLDERS := $(shell find . -name 'problem.txt' | sed 's/problem.txt//g')

__c-build:
	@docker build -q -f .docker/$(C).Dockerfile -t $(C) .

__cpp-build:
	@docker build -q -f .docker/$(CPP).Dockerfile -t $(CPP) .

__cpp-format-code: __cpp-lint-build
	@docker run \
		-v $(shell pwd):/code \
		-u $$(stat -c "%u:%g" $(shell pwd)) $(CPP)-lint \
			clang-format-7 \
				--style=file \
				-i \
				$$(find . -name '*.cpp') \
				$$(find . -name '*.c')

__cpp-lint: __cpp-lint-build
	@docker run -v $(shell pwd):/code $(CPP)-lint \
		cpplint \
			--quiet \
			--recursive \
			--filter="-legal/copyright,-runtime/int,-runtime/arrays" .
	@docker run -v $(shell pwd):/code $(CPP)-lint \
		scripts/run-clang-format.py \
			--clang-format-executable=clang-format-7 \
			-r .

__cpp-lint-build:
	@docker build -q -f .docker/$(CPP)-lint.Dockerfile -t $(CPP)-lint .

__cs-build:
	@docker build -q -f .docker/$(CS).Dockerfile -t $(CS) .

__js-build:
	@docker build -q -f .docker/$(JS).Dockerfile -t $(JS) .

__js-build-lint:
	@docker build -q -f .docker/$(JS)-lint.Dockerfile -t $(JS)-lint .

__js-format-code: __js-build-lint
	@docker run -v $(shell pwd):/code $(JS)-lint standard --fix

__js-lint: __js-build-lint
	@docker run -v $(shell pwd):/code $(JS)-lint standard

__py-build:
	@docker build -q -f .docker/$(PY).Dockerfile -t $(PY) .

__py-format-code: __py-lint-build
	@docker run \
		-v $(shell pwd):/code \
		-u $$(stat -c "%u:%g" $(shell pwd)) $(PY)-lint black .
	@docker run \
		-v $(shell pwd):/code \
		-u $$(stat -c "%u:%g" $(shell pwd)) $(PY)-lint isort -rc .

__py-lint: __py-lint-build
	@docker run -v $(shell pwd):/code $(PY)-lint black --check .
	@docker run -v $(shell pwd):/code $(PY)-lint flake8
	@docker run -v $(shell pwd):/code $(PY)-lint isort -rc -c .

__py-lint-build:
	@docker build -q -f .docker/$(PY)-lint.Dockerfile -t $(PY)-lint .

__shell-lint: __shell-lint-build
	@docker run -v $(shell pwd):/code shell-lint \
		find . -name '*.sh' | xargs shellcheck

__shell-lint-build:
	@docker build -q -f .docker/shell-lint.Dockerfile -t shell-lint .

__sql-build:
	@docker build -q -f .docker/$(SQL).Dockerfile -t $(SQL) .

clean:
	@find . -name 'result*.txt' -delete
	@find . -name 'a.out' -delete

format-code: __cpp-format-code __js-format-code __py-format-code

lint: __cpp-lint __js-lint __py-lint __shell-lint

run: __c-build __cpp-build __cs-build __js-build __py-build __sql-build
ifndef PROBLEM
	@for folder in $(FOLDERS); do \
		[ -f $${folder}WRONG ] && continue; \
		echo $$folder; \
		for language in $(LANGUAGES); do \
			[ $$(find $${folder} -name "*.$${language}" | wc -l) -eq 0 ] && continue; \
			docker run -v $(shell pwd):/code -e PROBLEM=$$folder $$language; \
		done; \
		utils/diff.sh $$folder; \
	done
	@rm -rf $${folder}result*.txt
else ifndef
	for language in $(LANGUAGES); do \
		[ $$(find $(PROBLEM) -name "*.$${language}" | wc -l) -eq 0 ] && continue; \
		docker run -v $(shell pwd):/code -e PROBLEM=$(PROBLEM) $$language; \
	done
	utils/diff.sh $(PROBLEM)
endif

wrong:
	@(find . -name 'WRONG')




run-db:
	docker run -d \
		-e POSTGRES_DB=uri \
		-e POSTGRES_USER=postgres \
		-e POSTGRES_PASSWROD=12345678 \
		-p 5432:5432 \
		postgres:9.4.19
