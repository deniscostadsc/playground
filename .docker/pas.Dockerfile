FROM ubuntu:14.04

RUN apt update && \
    apt upgrade -y && \
    apt install -y fpc-2.6.2

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.pas' | wc -l)" -eq 1 ]; then \
        fpc -opas.out *.pas; \
        if [ -f in.txt ]; then \
            ./pas.out < in.txt > result-pas.txt; \
        else \
            ./pas.out > result-pas.txt; \
        fi; \
        rm -rf *.o pas.out; \
    fi
