.DEFAULT: test

test:
	./run-all.sh

lint:
	flake8
	cpplint --quiet --recursive --filter="-legal/copyright" .

wrong:
	@(find . -name 'WRONG')
