FROM golang:1.20.0

RUN mkdir /code
WORKDIR /code
RUN mkdir -p /.cache && chmod 777 /.cache

CMD /code/scripts/docker/run-go.sh $FOLDERS
