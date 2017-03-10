.DEFAULT: build

clean:
	docker rm -f $(docker ps -a -q);
	docker rmi -f $(docker images -q)

build:
	docker build -t playground .
