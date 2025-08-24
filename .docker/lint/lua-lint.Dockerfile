FROM ubuntu:22.04

RUN apt update && apt install -y \
    lua5.4 \
    luarocks \
    git \
    build-essential \
    --no-install-recommends && rm -r /var/lib/apt/lists/*

RUN luarocks install luacheck

RUN mkdir /code
WORKDIR /code

COPY scripts/lint/lint-lua.sh /usr/local/bin/lint-lua.sh

CMD echo "lua"; /usr/local/bin/lint-lua.sh
