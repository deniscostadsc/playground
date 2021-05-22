FROM gcc:8.5.0

ENV OCAML_VERSION 4.01.0

RUN apt update && apt upgrade -y && apt install -y make

RUN wget https://github.com/ocaml/ocaml/archive/refs/tags/${OCAML_VERSION}.zip
RUN unzip ${OCAML_VERSION}.zip
RUN cd ocaml-${OCAML_VERSION} && ./configure && make world.opt && make install

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.ml' | wc -l)" -eq 1 ]; then \
        cp *.ml main.ml; \
        ocamlc -o ml.out main.ml; \
        if [ -f in.txt ]; then \
            ./ml.out < in.txt > result-ml.txt; \
        else \
            ./ml.out > result-ml.txt; \
        fi; \
        rm -rf ml.out main.ml main.cmi main.cmo; \
    fi
