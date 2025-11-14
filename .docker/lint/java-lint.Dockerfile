FROM eclipse-temurin:11-jdk

RUN apt-get update && apt-get install -y \
    checkstyle \
    && rm -rf /var/lib/apt/lists/*

RUN mkdir /code
WORKDIR /code

CMD echo "java"; scripts/lint/lint-java.sh
