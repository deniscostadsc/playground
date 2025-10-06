FROM haskell:latest

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run.sh
