FROM ubuntu:14.04

RUN apt update && \
    apt upgrade -y && \
    apt install -y --force-yes fpc-2.6.2

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-pas.sh
