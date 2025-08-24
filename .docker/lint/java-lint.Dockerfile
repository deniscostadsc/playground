FROM openjdk:11-jdk

RUN apt-get update && apt-get install -y \
    checkstyle \
    && rm -rf /var/lib/apt/lists/*

RUN mkdir /code
WORKDIR /code

COPY .docker/lint/java-lint.xml /custom_checks.xml

CMD echo "java"; if [ "${LINT_FIX:=0}" -eq 1 ]; then \
        true; \
    else \
        find . -name '*.java' -exec checkstyle -c /custom_checks.xml {} \; || true; \
    fi
