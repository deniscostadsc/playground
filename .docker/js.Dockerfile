FROM node:12.18.3

RUN npm install standard@14.3.3 --global

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-js.sh $FOLDERS
