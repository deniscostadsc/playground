.DEFAULT: test

test:
	./run-all.sh

lint:
	flake8
	cpplint --quiet --recursive --filter="-legal/copyright,-runtime/int,-runtime/arrays" . || :

wrong:
	@(find . -name 'WRONG')
