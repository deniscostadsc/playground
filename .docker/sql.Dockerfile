FROM postgres:9.4.19

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.sql' | wc -l)" -ge 1 ]; then \
        psql -d postgres -U postgres < schema.sql && \
        psql -d postgres -U postgres < ????.sql > result-sql.txt && \
        psql -d postgres -U postgres < drop-table.sql; \
    fi
