FROM clojure:temurin-8-jammy

RUN mkdir /code
WORKDIR /code
RUN mkdir /.clojure && chmod 777 /.clojure

CMD /code/scripts/docker/run-clj.sh
# CMD /code/scripts/update-clojure-cached-jars.sh
