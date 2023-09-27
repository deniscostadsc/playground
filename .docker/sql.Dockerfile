FROM postgres:9.4.19-alpine

ENV PGPASSWORD beecrowd

RUN mkdir /code
WORKDIR /code

RUN apk add wget

RUN cd /bin && \
    wget https://raw.githubusercontent.com/vishnubob/wait-for-it/master/wait-for-it.sh && \
    chmod +x wait-for-it.sh

CMD /bin/wait-for-it.sh database-server:5432 && /code/scripts/docker/run-sql.sh $FOLDERS
