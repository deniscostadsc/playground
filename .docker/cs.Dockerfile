FROM mono:5.10.1

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-cs.sh
