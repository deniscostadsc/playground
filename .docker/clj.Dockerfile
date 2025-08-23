FROM clojure:tools-deps-1.10.3.1087-slim-buster

RUN mkdir /code
WORKDIR /code
RUN mkdir /.clojure && chmod 777 /.clojure

CMD /code/scripts/docker/run-clj.sh
# CMD /code/scripts/docker/update-clojure-cached-jars.sh
