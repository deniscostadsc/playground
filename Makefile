.PHONY: \
	cpp-build \
	cpp-lint \
	cpp-lint-build \
	lint \
	python-build \
	python-lint \
	run \
	shell-lint \
	shell-lint-build \
	sql-build \
	wrong

CPP = cpp
PYTHON = py
SQL = sql
LANGUAGES = \
	$(CPP) \
	$(PYTHON)
FOLDERS := $(shell find . -name 'problem.txt' | sed 's/problem.txt//g')

cpp-build:
	docker build -q -f .docker/$(CPP).Dockerfile -t $(CPP) .

cpp-lint: cpp-lint-build
	docker run -v $(shell pwd):/code $(CPP)-lint \
		cpplint \
			--quiet \
			--recursive \
			--filter="-legal/copyright,-runtime/int,-runtime/arrays" .

cpp-lint-build:
	docker build -q -f .docker/$(CPP)-lint.Dockerfile -t $(CPP)-lint .

lint: python-lint shell-lint cpp-lint

python-build:
	docker build -q -f .docker/$(PYTHON).Dockerfile -t $(PYTHON) .

python-lint: python-build
	docker run -v $(shell pwd):/code $(PYTHON) flake8

run: cpp-build python-build sql-build
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
	@rm -rf result*.txt 2> /dev/null || true
else ifndef
	@for language in $(LANGUAGES); do \
		docker run -v $(shell pwd):/code -e PROBLEM=$(PROBLEM) $$language; \
	done
	utils/diff.sh $(PROBLEM)
	@rm -rf result*.txt 2> /dev/null || true
endif




run-db:
	docker run -d \
		-e POSTGRES_DB=uri \
		-e POSTGRES_USER=postgres \
		-e POSTGRES_PASSWROD=12345678 \
		-p 5432:5432 \
		postgres:9.4.19

shell-lint: shell-lint-build
	docker run -v $(shell pwd):/code shell-lint \
		find . -name '*.sh' | xargs shellcheck

shell-lint-build:
	docker build -q -f .docker/shell-lint.Dockerfile -t shell-lint .

sql-build:
	docker build -q -f .docker/$(SQL).Dockerfile -t $(SQL) .

wrong:
	@(find . -name 'WRONG')
