FROM alpine:latest

COPY --from=kcov/kcov:latest-alpine /usr/local/bin/kcov* /usr/local/bin/

ARG docker_path
ENV DOCKER_PATH $docker_path

RUN apk -U upgrade && \
    apk add --no-cache \
      bash \
      # kcov dependencies
      curl-dev \
      libdw \
      zlib-dev \
      elfutils-dev \
      libstdc++-dev \
      openssl-dev

RUN mkdir /code
WORKDIR /code

# Add latest released version of clitest
RUN wget https://raw.githubusercontent.com/aureliojargas/clitest/8bdaae2f56e524f8824307d5c443e6353fe0dbd9/clitest
RUN chmod +x clitest
RUN mv clitest /usr/bin

# CMD kcov \
#     --include-path=/code/scripts/ \
#     --bash-parse-files-in-dir=/code/scripts/ \
#     /code/coverage \
#     clitest --pre-flight '. ./scripts/utils/environments.sh' tests/scripts/utils/environments/*
CMD kcov \
    --include-path=/code/scripts \
    --bash-parse-files-in-dir=/code/scripts/ \
    --dump-summary \
    /tmp/coverage \
    clitest --pre-flight '. ./scripts/utils/environments.sh' tests/scripts/utils/environments/*
