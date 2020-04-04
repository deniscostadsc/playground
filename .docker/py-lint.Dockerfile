FROM python:3.6

RUN pip install \
    black \
    flake8 \
    isort

RUN mkdir /code
WORKDIR /code
