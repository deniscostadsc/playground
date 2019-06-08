.PHONY: test lint wrong run-db

test:
	./run-all.sh

lint:
	flake8
	cpplint --quiet --recursive --filter="-legal/copyright,-runtime/int,-runtime/arrays" . || :
	shellcheck -x $(shell find . -name '*.sh') || :

wrong:
	@(find . -name 'WRONG')

run-db:
	docker run -d \
		-e POSTGRES_DB=uri \
		-e POSTGRES_USER=uri \
		-e POSTGRES_PASSWROD=12345678 \
		-p 5432:5432 \
		postgres:9.4.19
