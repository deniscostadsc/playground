FROM gcc:11.3.0

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-cpp.sh
