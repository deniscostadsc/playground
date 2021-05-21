FROM r-base:4.0.2

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(ls *.r | wc -l)" -eq 1 ]; then \
        if [ -f in.txt ]; then \
            Rscript *.r < in.txt > result-r.txt; \
        else \
            Rscript *.r > result-r.txt; \
        fi; \
    fi
