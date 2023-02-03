FROM gcc:8.5.0

ENV OCAML_VERSION 4.01.0

RUN apt update && apt upgrade -y && apt install -y --force-yes make

RUN wget https://github.com/ocaml/ocaml/archive/refs/tags/${OCAML_VERSION}.zip
RUN unzip ${OCAML_VERSION}.zip
RUN cd ocaml-${OCAML_VERSION} && ./configure && make world.opt && make install

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-ml.sh $FOLDERS
