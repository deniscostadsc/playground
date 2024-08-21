FROM rust:1.48

ENV RUST_BACKTRACE 1

RUN mkdir /code
WORKDIR /code

CMD /code/scripts/docker/run-rs.sh
