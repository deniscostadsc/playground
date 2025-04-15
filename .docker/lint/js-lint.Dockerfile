FROM node:12.22.0

RUN npm install -g standard

RUN mkdir /code
WORKDIR /code

RUN mkdir -p /.cache/standard/v17
RUN chmod -R 777 /.cache

CMD echo "js"; if [ "${LINT_FIX:=0}" -eq 1 ]; then \
        standard --fix "./**/*.js"; \
    else \
        standard "./**/*.js"; \
    fi
