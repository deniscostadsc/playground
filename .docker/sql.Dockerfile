FROM postgres:9.4.19

RUN mkdir /code
WORKDIR /code

RUN apt update && apt install wget -y

RUN cd /bin && \
    wget https://raw.githubusercontent.com/vishnubob/wait-for-it/master/wait-for-it.sh && \
    chmod +x wait-for-it.sh

CMD /bin/wait-for-it.sh database-server:5432 && \
    cd $PROBLEM && \
    if [ "$(find . -name '*.sql' | wc -l)" -eq 3 ]; then \
        psql -h database-server -d $POSTGRES_DB -U $POSTGRES_USER < schema.sql && \
        psql -h database-server -d $POSTGRES_DB -U $POSTGRES_USER < $(eval "echo ????.sql") > result-sql.txt && \
        psql -h database-server -d $POSTGRES_DB -U $POSTGRES_USER < drop-table.sql; \
    fi
