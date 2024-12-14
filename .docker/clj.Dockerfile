FROM cimg/clojure:1.10.3-openjdk-11.0

RUN sudo mkdir /code
WORKDIR /code
RUN sudo mkdir /.clojure && sudo chmod 777 /.clojure

CMD /code/scripts/docker/run-clj.sh
# CMD /code/scripts/update-clojure-cached-jars.sh
