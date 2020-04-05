FROM node:8.4.0

RUN npm install eslint@6.8.0

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ -f in.txt ]; then \
        node *.js < in.txt > result-js.txt; \
    else \
        node *.js > result-js.txt; \
    fi
