FROM alpine:latest

RUN apk -U upgrade && apk add shellcheck

RUN mkdir /code
WORKDIR /code
