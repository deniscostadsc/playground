FROM openjdk:17-jdk

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(ls *.java | wc -l)" -eq 1 ]; then \
        cp *.java Main.java; \
        javac Main.java; \
        if [ -f in.txt ]; then \
            java Main < in.txt > result-java.txt; \
        else \
            java Main > result-java.txt; \
        fi; \
        rm -rf Main.java Main.class; \
    fi
