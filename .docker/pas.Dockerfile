FROM kveroneau/fpc:3.2.0

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.pas' | wc -l)" -eq 1 ]; then \
        fpc -opas.out *.pas > /dev/null; \
        if [ -f in.txt ]; then \
            ./pas.out < in.txt > result-pas.txt; \
        else \
            ./pas.out > result-pas.txt; \
        fi; \
        rm -rf 1000.o pas.out; \
    fi
