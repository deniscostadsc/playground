all: \
	cpp-lint \
	cpp-lint-build \
	lint \
	python-build \
	python-lint \
	shell-lint \
	shell-lint-build \
	run-db \
	test \
	wrong

.PHONY: all

cpp-lint-build:
	docker build -q -f .docker/cpp-lint.Dockerfile -t cpp-lint .

cpp-lint: cpp-lint-build
	docker run -v $(shell pwd):/code cpp-lint \
		cpplint \
			--quiet \
			--recursive \
			--filter="-legal/copyright,-runtime/int,-runtime/arrays" .

python-build:
	docker build -q -f .docker/python.Dockerfile -t python .

python-lint: python-build
	docker run -v $(shell pwd):/code python flake8

shell-lint-build:
	docker build -q -f .docker/shell-lint.Dockerfile -t shell-lint .

shell-lint: shell-lint-build
	docker run -v $(shell pwd):/code shell-lint \
		shellcheck **/*.sh

lint: python-lint shell-lint cpp-lint






test:
	./run-all.sh

wrong:
	@(find . -name 'WRONG')

gcc-build:
	docker build -f .docker/gcc.Dockerfile -t gcc .

run-db:
	docker run -d \
		-e POSTGRES_DB=uri \
		-e POSTGRES_USER=postgres \
		-e POSTGRES_PASSWROD=12345678 \
		-p 5432:5432 \
		postgres:9.4.19
