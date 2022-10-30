FROM python:3.9.4

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && /code/scripts/docker-cmd.sh py
