FROM alpine:latest

RUN apk -U upgrade && apk add shellcheck bash

RUN wget -O /usr/local/bin/shfmt https://github.com/mvdan/sh/releases/download/v3.8.0/shfmt_v3.8.0_linux_amd64 && \
    chmod +x /usr/local/bin/shfmt

RUN mkdir /code
WORKDIR /code

CMD echo "sh"; if [ "${LINT_FIX:=0}" -eq 1 ]; then \
        shfmt -w . 2>/dev/null || true; \
    else \
        ./scripts/lint/lint-sh.sh; \
    fi
