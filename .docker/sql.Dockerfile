FROM postgres:9.4.19

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.sql' | wc -l)" -eq 1 ]; then \
        psql -h localhost -d uri < schema.sql && \
        psql -h localhost -d uri < ????.sql > result-sql.txt && \
        psql -h localhost -d uri < drop-table.sql; \
    fi
