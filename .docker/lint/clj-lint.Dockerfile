FROM ubuntu:20.04

RUN apt update
RUN apt upgrade -y
RUN apt install -y \
    curl \
    unzip

RUN curl -sLO https://raw.githubusercontent.com/clj-kondo/clj-kondo/master/script/install-clj-kondo
RUN chmod +x install-clj-kondo
RUN ./install-clj-kondo

RUN mkdir /code
WORKDIR /code

CMD echo "clj"; if [ "${LINT_FIX:=0}" -eq 1 ]; then \
        true; \
    else \
        ./scripts/lint-clj.sh; \
    fi
