FROM ubuntu:xenial

RUN apt-get update \
    && apt-get upgrade -y \
    && apt-get install -y \
        build-essential \
        clisp \
        g++ \
        gcc \
        golang \
        #language-pack-en \
        #libffi-dev \
        #libssl-dev \
        nodejs \
        npm \
        #python-dev \
        python-pip \
    && apt-get autoremove -y \
    && apt-get autoclean -y

COPY .bin/marathon /bin/

CMD cd /home/playground/src && /bin/marathon /dev/
