FROM alpine:latest

RUN apk -U upgrade && apk add shellcheck bash

RUN mkdir /code
WORKDIR /code

CMD echo "shellscript"; if [ "$LINT_FIX" = 1 ]; then \
        true; \
    else \
        ./scripts/lint-shellscript.sh; \
    fi
