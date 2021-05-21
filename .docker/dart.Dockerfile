FROM google/dart:2.9

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.dart' | wc -l)" -eq 1 ]; then \
        if [ -f in.txt ]; then \
            dart *.dart < in.txt > result-dart.txt; \
        else \
            dart *.dart > result-dart.txt; \
        fi; \
    fi
