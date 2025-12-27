FROM --platform=linux/amd64 ubuntu:16.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    build-essential \
    libc6-dev \
    && rm -rf /var/lib/apt/lists/*

COPY .docker/pas.fpc-2.6.2.x86_64-linux.tar /tmp/
RUN cd /tmp && \
    tar -xf pas.fpc-2.6.2.x86_64-linux.tar && \
    cd fpc-2.6.2.x86_64-linux && \
    ./install.sh --prefix=/usr/local --installdir=/usr/local --baseinstalldir=/usr/local && \
    rm -rf /tmp/fpc-2.6.2.x86_64-linux*

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run.sh
