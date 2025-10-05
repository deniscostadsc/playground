FROM swift:5.8.1-focal

RUN mkdir /code
WORKDIR /code

RUN mkdir /.cache && chmod -R 777 /.cache

CMD /code/scripts/docker/run.sh
