FROM python:3.11.4

RUN python -m ensurepip --upgrade
RUN pip install cpplint
RUN apt update -y && apt upgrade -y && apt install clang-format -y

RUN mkdir /code
WORKDIR /code

CMD echo "c"; if [ "${LINT_FIX:=0}" -eq 1 ]; then \
        clang-format \
            --style=file \
            -i \
            $(find . -name '*.c'); \
    else \
        cpplint \
            --quiet \
            --recursive \
            --extensions=c \
            --filter="-legal/copyright,-runtime/arrays,-readability/casting,-build/include_what_you_use" . && \
        scripts/lint/run-clang-format.py \
            --clang-format-executable=clang-format \
            --extensions=c \
            -r .; \
    fi
