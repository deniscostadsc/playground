FROM node:12.22.0

RUN npm install -g standard

RUN mkdir /code
WORKDIR /code

RUN mkdir /.cache
RUN chmod 777 /.cache

CMD echo "js"; if [ "$LINT_FIX" = 1 ]; then \
        standard --fix; \
    else \
        standard; \
    fi
