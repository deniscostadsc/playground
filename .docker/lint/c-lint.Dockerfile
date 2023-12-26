FROM python:3

SHELL ["/bin/bash", "-o", "pipefail", "-c"]

RUN pip install --upgrade pip
RUN pip install cpplint
RUN apt update && apt install clang-format -y

RUN mkdir /code
WORKDIR /code

CMD echo "c"; if [ "$LINT_FIX" = 1 ]; then \
        clang-format \
            --style=file \
            -i \
            $(find . -name '*.c'); \
    else \
        cpplint \
            --quiet \
            --recursive \
            --extensions=c \
            --filter="-legal/copyright,-runtime/arrays,-readability/casting" . && \
        scripts/run-clang-format.py \
            --clang-format-executable=clang-format \
            -r .; \
    fi
