FROM python:3.9.4

RUN pip install -U pip
RUN pip install \
    blue \
    flake8 \
    isort

RUN mkdir /code
WORKDIR /code
