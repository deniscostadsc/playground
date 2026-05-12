FROM --platform=linux/amd64 ocaml/opam:ubuntu-16.04_ocaml-4.01.0

RUN sudo mkdir -p /code /home/opam/.opam/log/
RUN chmod 777 -R /home/opam/
WORKDIR /code

CMD /code/scripts/docker/run.sh
