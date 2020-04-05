.PHONY: \
	__cpp-build \
	__cpp-format-code \
	__cpp-lint \
	__cpp-lint-build \
	__python-build \
	__python-format-code \
	__python-lint \
	__python-lint-build \
	__shell-lint \
	__shell-lint-build \
	__sql-build \
	format-code \
	lint \
	run \
	wrong

CPP = cpp
PYTHON = py
SQL = sql
LANGUAGES = \
	$(CPP) \
	$(PYTHON)
FOLDERS := $(shell find . -name 'problem.txt' | sed 's/problem.txt//g')

__cpp-build:
	@docker build -q -f .docker/$(CPP).Dockerfile -t $(CPP) .

__cpp-format-code: __cpp-lint-build
	@docker run -v $(shell pwd):/code $(CPP)-lint \
		clang-format-7 --style=file -i $$(find . -name '*.cpp')

__cpp-lint: __cpp-lint-build
	@docker run -v $(shell pwd):/code $(CPP)-lint \
		cpplint \
			--quiet \
			--recursive \
			--filter="-legal/copyright,-runtime/int,-runtime/arrays" .

__cpp-lint-build:
	@docker build -q -f .docker/$(CPP)-lint.Dockerfile -t $(CPP)-lint .

__python-build:
	@docker build -q -f .docker/$(PYTHON).Dockerfile -t $(PYTHON) .

__python-format-code: __python-lint-build
	@docker run -v $(shell pwd):/code $(PYTHON)-lint black .
	@docker run -v $(shell pwd):/code $(PYTHON)-lint isort -rc .

__python-lint: __python-lint-build
	@docker run -v $(shell pwd):/code $(PYTHON)-lint black --check .
	@docker run -v $(shell pwd):/code $(PYTHON)-lint flake8
	@docker run -v $(shell pwd):/code $(PYTHON)-lint isort -rc -c .

__python-lint-build:
	@docker build -q -f .docker/$(PYTHON)-lint.Dockerfile -t $(PYTHON)-lint .

__shell-lint: __shell-lint-build
	@docker run -v $(shell pwd):/code shell-lint \
		find . -name '*.sh' | xargs shellcheck

__shell-lint-build:
	@docker build -q -f .docker/shell-lint.Dockerfile -t shell-lint .

__sql-build:
	@docker build -q -f .docker/$(SQL).Dockerfile -t $(SQL) .

format-code: __cpp-format-code __python-format-code

lint: __cpp-lint __python-lint __shell-lint

run: __cpp-build __python-build __sql-build
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
