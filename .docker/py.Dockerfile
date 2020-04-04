FROM python:3.4.3

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ -f in.txt ]; then \
        python *.py < in.txt > result-python.txt; \
    else \
        python *.py > result-python.txt; \
    fi
