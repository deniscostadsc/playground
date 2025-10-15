FROM alpine:latest

RUN apk -U upgrade && apk add wget bash openjdk8

RUN wget https://github.com/JetBrains/kotlin/releases/download/v1.2.10/kotlin-compiler-1.2.10.zip
RUN unzip kotlin-compiler-1.2.10.zip

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run.sh
