FROM rust:1.48

ENV RUST_BACKTRACE 1

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.rs' | wc -l)" -eq 1 ]; then \
        rustc -o main *.rs; \
        if [ -f in.txt ]; then \
            ./main < in.txt > result-rs.txt; \
        else \
            ./main > result-rs.txt; \
        fi; \
        rm -rf main; \
    fi
