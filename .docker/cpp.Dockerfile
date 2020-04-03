FROM gcc:4.8.5

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.cpp' | wc -l)" -eq 1 ]; then \
        g++ -std=c++11 -O2 -lm *.cpp && \
        ./a.out < in.txt > result-cpp.txt ; \
    fi
