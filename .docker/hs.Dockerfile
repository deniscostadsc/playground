FROM haskell:latest

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.hs' | wc -l)" -eq 1 ]; then \
        ghc -o hs.out *.hs > /dev/null; \
        if [ -f in.txt ]; then \
            ./hs.out < in.txt > result-hs.txt; \
        else \
            ./hs.out > result-hs.txt; \
        fi; \
        rm -rf *.o *.hi hs.out; \
    fi
