FROM clojure:latest

RUN mkdir /code
WORKDIR /code
RUN mkdir /.clojure && chmod 777 /.clojure

CMD /code/scripts/docker/run-clj.sh $FOLDERS
