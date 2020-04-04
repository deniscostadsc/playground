FROM python:3

RUN pip install -U pip
RUN pip install cpplint
RUN apt-get update && apt-get install clang-format-7 -y

RUN mkdir /code
WORKDIR /code
