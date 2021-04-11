FROM node:lts-alpine

RUN npm install -g --unsafe-perm standard

RUN mkdir /code
WORKDIR /code
RUN mkdir /.cache
RUN chmod 777 /.cache
