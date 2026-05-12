FROM eclipse-temurin:8-jdk

ARG docker_path
ENV DOCKER_PATH $docker_path

RUN mkdir /code
WORKDIR /code

RUN apt-get update && apt-get install -y wget gnupg

COPY ${DOCKER_PATH}/scala-sbt-1.9.8.tgz /tmp/
COPY ${DOCKER_PATH}/scala-2.11.8.tgz /tmp/

RUN tar xzf /tmp/scala-sbt-1.9.8.tgz -C /usr/local --strip-components=1 && \
    tar xzf /tmp/scala-2.11.8.tgz -C /usr/local && \
    mv /usr/local/scala-2.11.8 /usr/local/scala && \
    ln -s /usr/local/scala/bin/scala /usr/local/bin/scala && \
    ln -s /usr/local/scala/bin/scalac /usr/local/bin/scalac && \
    rm /tmp/*.tgz

RUN scala -version

CMD /code/scripts/docker/run.sh
