FROM openjdk:11-jdk

RUN mkdir /code
WORKDIR /code

RUN echo "deb https://repo.scala-sbt.org/scalasbt/debian all main" | tee /etc/apt/sources.list.d/sbt.list
RUN curl -sL "https://keyserver.ubuntu.com/pks/lookup?op=get&search=0x2EE0EA64E40A89B84B2DF73499E82A75642AC823" | apt-key add
RUN apt-get update
RUN apt-get install -y scala

CMD cd $PROBLEM && \
    if [ "$(ls *.scala | wc -l)" -eq 1 ]; then \
        scalac *.scala; \
        if [ -f in.txt ]; then \
            scala Main < in.txt > result-scala.txt; \
        else \
            scala Main > result-scala.txt; \
        fi; \
        rm -rf Main*.class; \
    fi
