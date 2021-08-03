FROM mono:5.10.1

RUN mkdir /code
WORKDIR /code

CMD cd $PROBLEM && \
    if [ "$(find . -name '*.cs' | wc -l)" -eq 1 ]; then \
        mcs -out:a.exe *.cs; \
        if [ -f in.txt ]; then \
            mono a.exe < in.txt > result-cs.txt; \
        else \
            mono a.exe > result-cs.txt; \
        fi; \
        rm -rf a.exe; \
    fi
