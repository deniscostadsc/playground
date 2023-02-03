FROM golang:1.8.1

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-go.sh $FOLDERS
