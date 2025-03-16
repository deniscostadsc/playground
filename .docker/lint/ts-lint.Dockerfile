FROM mcr.microsoft.com/devcontainers/typescript-node:1.0.3-20

RUN npm install -g ts-standard

RUN mkdir /code
WORKDIR /code

RUN mkdir -p /.cache/ts-standard/v12
RUN chmod -R 777 /.cache

CMD echo "ts"; if [ "${LINT_FIX:=0}" -eq 1 ]; then \
        ts-standard --fix "**/*.ts"; \
    else \
        ts-standard "**/*.ts"; \
    fi
