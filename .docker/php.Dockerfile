FROM php:7.4.3-alpine

RUN mkdir /code
WORKDIR /code

RUN apk add bash

CMD /code/scripts/docker/run-php.sh
