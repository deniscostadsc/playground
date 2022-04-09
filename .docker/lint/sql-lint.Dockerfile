FROM python:3.9

RUN pip install -U pip
RUN pip install sqlparse

RUN mkdir /code
WORKDIR /code
