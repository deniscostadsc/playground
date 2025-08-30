FROM postgres:9.4.19-alpine

ENV PGPASSWORD beecrowd

RUN mkdir /code
WORKDIR /code

RUN apk add wget

COPY scripts/docker/wait-for-it.sh /bin

CMD /bin/wait-for-it.sh database-server:5432 && /code/scripts/docker/run-sql.sh
