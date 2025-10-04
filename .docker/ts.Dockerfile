FROM node:20

RUN mkdir /code
WORKDIR /code

RUN npm install -g typescript@5.1.6
RUN npm install -g @types/node@18.16.19

CMD /code/scripts/docker/run.sh
