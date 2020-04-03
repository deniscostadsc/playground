FROM python:3.4.3

RUN pip install flake8

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    python *.py < in.txt > result-python.txt
