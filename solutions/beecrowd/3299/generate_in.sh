#!/usr/bin/env bash

set -euo pipefail

TESTCASES=100
MAX_DIGITS_COUNT=5
MAX_DIGIT=5

for _ in $(seq "${TESTCASES}"); do
    for _ in $(seq $((RANDOM % MAX_DIGITS_COUNT + 1))); do
        echo -n "$((RANDOM % MAX_DIGIT + 1))"
    done
    echo
done
