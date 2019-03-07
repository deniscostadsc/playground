.DEFAULT: test

test:
	./run-all.sh

lint:
	flake8
	cpplint --recursive --filter="-legal/copyright" .
