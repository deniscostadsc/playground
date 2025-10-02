FROM gcc:4.8.5

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run.sh
