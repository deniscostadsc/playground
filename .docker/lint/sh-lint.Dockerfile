FROM alpine:latest

RUN apk -U upgrade && apk add shellcheck bash

RUN mkdir /code
WORKDIR /code

CMD echo "sh"; if [ "${LINT_FIX:=0}" -eq 1 ]; then \
        true; \
    else \
        ./scripts/lint-sh.sh; \
    fi
