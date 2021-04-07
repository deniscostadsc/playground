FROM python:3.8.2

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ -f in.txt ]; then \
        python *.py < in.txt > result-py.txt; \
    else \
        python *.py > result-py.txt; \
    fi
