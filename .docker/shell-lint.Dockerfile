FROM ubuntu:18.04

RUN apt update && apt install shellcheck

RUN mkdir /code
WORKDIR /code
