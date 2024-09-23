FROM golang:1.8.1

RUN mkdir /code
WORKDIR /code

CMD echo "go"; if [ "${LINT_FIX:=0}" -eq 1 ]; then \
        gofmt -w .; \
    else \
        [ "$(gofmt -l . | wc -l)" -eq 0 ]; \
    fi
