FROM debian:jessie

ENV LUA_VERSION 5.4.0

RUN apt-get update && apt-get upgrade -y && apt-get install -y \
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

RUN apt-get remove --purge -y \
    wget \
    make \
    build-essential \
    libreadline-dev \
    ca-certificates \
    mingw-w64 && \
    apt-get autoremove -y

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.lua' | wc -l)" -eq 1 ]; then \
        if [ -f in.txt ]; then \
            lua *.lua < in.txt > result-lua.txt; \
        else \
            lua *.lua > result-lua.txt; \
        fi; \
    fi
