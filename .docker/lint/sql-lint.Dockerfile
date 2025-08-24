FROM python:3.9

RUN apt update && \
    apt upgrade -y && \
    apt install -y git

RUN pip install -U pip
RUN pip install sqlparse

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/lint/lint-sql.sh
