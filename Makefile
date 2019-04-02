.PHONY: test lint wrong

test:
	./run-all.sh

lint:
	flake8
	cpplint --quiet --recursive --filter="-legal/copyright,-runtime/int,-runtime/arrays" . || :
	shellcheck -x $(shell find . -name '*.sh') || :

wrong:
	@(find . -name 'WRONG')
