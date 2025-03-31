FROM julia:1.5.3-buster

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-jl.sh
