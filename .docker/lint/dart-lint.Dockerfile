FROM google/dart

RUN mkdir /code
WORKDIR /code

# Always got a error that says dart command not found on github actions.
# In the meanwhile, I created that shellscript bellow.
CMD echo "dart"; if [ "$LINT_FIX" = 1 ]; then \
        dart format . > /dev/null; \
    else \
        ./scripts/lint-dart.sh; \
    fi

