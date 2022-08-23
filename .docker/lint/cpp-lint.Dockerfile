FROM python:3

RUN pip install -U pip
RUN pip install cpplint
RUN apt update && apt install clang-format -y

RUN mkdir /code
WORKDIR /code

CMD echo "cpp"; cpplint \
        --quiet \
        --recursive \
        --extensions=cpp \
        --filter="-legal/copyright,-runtime/arrays" . && \
	scripts/run-clang-format.py \
        --clang-format-executable=clang-format \
        -r .
