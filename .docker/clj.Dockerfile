FROM clojure:latest

RUN mkdir /code
WORKDIR /code
RUN mkdir /.clojure && chmod 777 /.clojure

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.clj' | wc -l)" -eq 1 ]; then \
        if [ -f in.txt ]; then \
            clojure -M *.clj < in.txt > result-clj.txt; \
        else \
            clojure -M *.clj > result-clj.txt; \
        fi; \
        rm -rf ?; \
    fi
