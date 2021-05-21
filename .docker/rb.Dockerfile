FROM ruby:2.7.0

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.rb' | wc -l)" -eq 1 ]; then \
        if [ -f in.txt ]; then \
            ruby *.rb < in.txt > result-rb.txt; \
        else \
            ruby *.rb > result-rb.txt; \
        fi; \
    fi
