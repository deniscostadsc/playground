FROM php:7.4.3-alpine

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.php' | wc -l)" -eq 1 ]; then \
        if [ -f in.txt ]; then \
            php *.php < in.txt > result-php.txt; \
        else \
            php *.php > result-php.txt; \
        fi; \
    fi
