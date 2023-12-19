FROM dart:3.0.5

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-dart.sh $FOLDERS
