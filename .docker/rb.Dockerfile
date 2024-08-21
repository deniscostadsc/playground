FROM ruby:2.7.0

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-rb.sh
