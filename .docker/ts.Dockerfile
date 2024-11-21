FROM mcr.microsoft.com/devcontainers/typescript-node:1.0.3-20

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-ts.sh
