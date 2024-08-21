FROM python:3.11.4

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-py.sh
