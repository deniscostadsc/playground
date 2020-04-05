.PHONY: \
	__cpp-build \
	__cpp-format-code \
	__cpp-lint \
	__cpp-lint-build \
	__py-build \
	__py-format-code \
	__py-lint \
	__py-lint-build \
	__shell-lint \
	__shell-lint-build \
	__sql-build \
	format-code \
	lint \
	run \
	wrong

CPP = cpp
JS = js
PY = py
SQL = sql
LANGUAGES = \
	$(CPP) \
	$(JS) \
	$(PY)
FOLDERS := $(shell find . -name 'problem.txt' | sed 's/problem.txt//g')

__cpp-build:
	@docker build -q -f .docker/$(CPP).Dockerfile -t $(CPP) .

__cpp-format-code: __cpp-lint-build
	@docker run -v $(shell pwd):/code $(CPP)-lint \
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

__js-build:
	@docker build -q -f .docker/$(JS).Dockerfile -t $(JS) .

__py-build:
	@docker build -q -f .docker/$(PY).Dockerfile -t $(PY) .

__py-format-code: __py-lint-build
	@docker run -v $(shell pwd):/code $(PY)-lint black .
	@docker run -v $(shell pwd):/code $(PY)-lint isort -rc .

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

format-code: __cpp-format-code __py-format-code

lint: __cpp-lint __py-lint __shell-lint

run: __cpp-build __js-build __py-build __sql-build
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
	@for language in $(LANGUAGES); do \
		[ $$(find $${folder} -name "*.$${language}" | wc -l) -eq 0 ] && continue; \
		docker run -v $(shell pwd):/code -e PROBLEM=$(PROBLEM) $$language; \
	done
	utils/diff.sh $(PROBLEM)
	@rm -rf $(PROBLEM)result*.txt
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
