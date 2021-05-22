FROM alpine:latest

RUN apk -U upgrade && apk add wget bash openjdk11

RUN wget https://github.com/JetBrains/kotlin/releases/download/v1.4.10/kotlin-compiler-1.4.10.zip
RUN unzip kotlin-compiler-1.4.10.zip

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(ls *.kt | wc -l)" -eq 1 ]; then \
        cp *.kt main.kt; \
        /kotlinc/bin/kotlinc main.kt; \
        if [ -f in.txt ]; then \
            /kotlinc/bin/kotlin MainKt < in.txt > result-kt.txt; \
        else \
            /kotlinc/bin/kotlin MainKt > result-kt.txt; \
        fi; \
        rm -rf MainKt.class main.kt META-INF; \
    fi
