FROM python:3.9.4

RUN pip install -U pip pip-tools

RUN mkdir /code
WORKDIR /code

COPY .docker/lint/py-requirements.lock /code/
RUN pip install -r py-requirements.lock

CMD echo "py"; ./scripts/update-python-requirements-ci.sh 2> /dev/null && \
    if [ "$LINT_FIX" = 1 ]; then \
        blue . && \
        isort .; \
    else \
        blue --check . && \
        flake8 && \
        isort -c .; \
    fi
