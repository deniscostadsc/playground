FROM python:3.11.4

RUN which pip
RUN pip install -U pip
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
