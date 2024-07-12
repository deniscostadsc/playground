FROM python:3

RUN pip install -U pip
RUN pip install cpplint
RUN apt update && apt install clang-format -y

RUN mkdir /code
WORKDIR /code

CMD echo "cpp"; if [ "$LINT_FIX" = 1 ]; then \
        clang-format \
            --style=file \
            -i \
            $(find . -name '*.cpp'); \
    else \
        cpplint \
            --quiet \
            --recursive \
            --extensions=cpp \
            --filter="-legal/copyright,-runtime/arrays" . && \
        scripts/run-clang-format.py \
            --clang-format-executable=clang-format \
            --extensions=cpp \
            -r .; \
    fi
