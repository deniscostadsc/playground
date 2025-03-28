FROM dart:3.0.5

RUN mkdir /code
WORKDIR /code

CMD echo "dart"; if [ "${LINT_FIX:=0}" -eq 1 ]; then \
        dart format . > /dev/null; \
    else \
        dart format -o none --set-exit-if-changed . > /dev/null \
    fi

