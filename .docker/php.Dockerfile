FROM php:8.1.2-alpine

RUN mkdir /code
WORKDIR /code

RUN apk add bash

CMD /code/scripts/docker/run.sh
