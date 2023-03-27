FROM python:3.9

RUN apt update && \
    apt upgrade -y && \
    apt install -y git

RUN pip install -U pip
RUN pip install sqlparse

RUN mkdir /code
WORKDIR /code

# sqlparse doesn't have a dryrun option
CMD echo "sql"; find . -name '*.sql' -exec sqlformat --indent_width=4 -k upper -o {} {} \; && \
    if [ "$LINT_FIX" != 1 ]; then \
        git diff --exit-code *.sql; \
    fi
