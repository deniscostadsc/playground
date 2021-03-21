FROM postgres:9.4.19

RUN mkdir /code
WORKDIR /code

CMD pwd && ls && cd $PROBLEM && \
    if [ "$(find . -name '*.sql' | wc -l)" -eq 3 ]; then \
        psql -h database-server -d uri -U uri < schema.sql && \
        psql -h database-server -d uri -U uri < $(eval "echo ????.sql") > result-sql.txt && \
        psql -h database-server -d uri -U uri < drop-table.sql; \
    fi
