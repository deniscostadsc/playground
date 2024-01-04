FROM node:12.18.3

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-js.sh $FOLDERS
