FROM ubuntu:22.04

ENV LUA_VERSION 5.4.0

RUN apt update && apt upgrade -y && apt install -y \
		wget \
		build-essential \
		make \
		gcc \
		mingw-w64 \
		libreadline-dev \
		ca-certificates \
		unzip \
		libssl-dev \
    --no-install-recommends && rm -r /var/lib/apt/lists/*

RUN wget http://www.lua.org/ftp/lua-${LUA_VERSION}.tar.gz && \
    tar xf lua-${LUA_VERSION}.tar.gz && \
    cd lua-${LUA_VERSION} && \
    make linux && \
    ln -s /lua-${LUA_VERSION}/src/lua /usr/bin/lua

RUN apt remove --purge -y \
    wget \
    make \
    build-essential \
    libreadline-dev \
    ca-certificates \
    mingw-w64 && \
    apt autoremove -y

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-lua.sh $FOLDERS
