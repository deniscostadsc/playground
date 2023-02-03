FROM google/dart:2.9

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-dart.sh $FOLDERS
