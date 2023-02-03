FROM r-base:4.0.2

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-r.sh $FOLDERS
