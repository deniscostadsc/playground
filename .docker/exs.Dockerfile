FROM elixir:1.11.2-alpine

RUN apk -U upgrade && apk add bash

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-exs.sh

