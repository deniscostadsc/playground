FROM ubuntu:24.04

ENV OCAML_VERSION 4.05.0

RUN apt update && apt upgrade -y && apt install -y --force-yes opam

RUN opam init --disable-sandboxing
RUN opam update

RUN opam install -y ocaml=${OCAML_VERSION}
RUN opam switch create ${OCAML_VERSION}

RUN mkdir code
WORKDIR /code

CMD /code/scripts/docker/run-ml.sh
