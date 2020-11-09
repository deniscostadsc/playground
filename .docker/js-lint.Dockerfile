FROM node:8.10.0

RUN npm install standard@14.3.3 --unsafe-perm=true --global

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ -f in.txt ]; then \
        node *.js < in.txt > result-js.txt; \
    else \
        node *.js > result-js.txt; \
    fi
