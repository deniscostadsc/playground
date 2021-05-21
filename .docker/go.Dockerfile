FROM golang:1.8.1

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.go' | wc -l)" -eq 1 ]; then \
        if [ -f in.txt ]; then \
            go run *.go < in.txt > result-py.txt; \
        else \
            go run *.go > result-py.txt; \
        fi; \
    fi
