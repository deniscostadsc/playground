FROM node:12.18.3

RUN npm install standard@14.3.3 --global

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(ls *.js | wc -l)" -eq 1 ]; then \
        if [ -f in.txt ]; then \
            node *.js < in.txt > result-js.txt; \
        else \
            node *.js > result-js.txt; \
        fi; \
    fi
