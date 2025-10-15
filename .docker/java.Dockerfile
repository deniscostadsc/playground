FROM eclipse-temurin:11-jdk

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run.sh
