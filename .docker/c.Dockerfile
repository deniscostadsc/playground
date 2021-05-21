FROM gcc:4.8.5

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.c' | wc -l)" -eq 1 ]; then \
        gcc -Werror -std=c99 -O2 -lm *.c || exit 1; \
        if [ -f in.txt ]; then \
            ./a.out < in.txt > result-c.txt; \
        else \
            ./a.out > result-c.txt; \
        fi; \
        rm -rf a.out; \
    fi
