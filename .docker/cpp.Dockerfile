FROM gcc:7.3.0

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.cpp' | wc -l)" -eq 1 ]; then \
        g++ -Werror -std=c++17 -O2 -lm *.cpp || exit 1; \
        if [ -f in.txt ]; then \
            ./a.out < in.txt > result-cpp.txt; \
        else \
            ./a.out > result-cpp.txt; \
        fi; \
        rm -rf a.out; \
    fi
