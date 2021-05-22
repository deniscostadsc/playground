FROM python:3.9.4

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.py' | wc -l)" -eq 1 ]; then \
        if [ -f in.txt ]; then \
            python *.py < in.txt > result-py.txt; \
        else \
            python *.py > result-py.txt; \
        fi; \
    fi
