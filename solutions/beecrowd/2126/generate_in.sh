#!/usr/bin/env bash

set -euo pipefail

TESTCASES=10000

ALLOWED_NUMBERS=(1 2 3 4 5 6 7 8 9)

for _ in $(seq $TESTCASES); do
    subsequence=$((RANDOM % 4 + 1))
    sequence=$((RANDOM % 65 + 64))

    for _ in $(seq $subsequence); do
        echo -n "${ALLOWED_NUMBERS[$((RANDOM % 9))]}"
    done
    echo

    for _ in $(seq $sequence); do
        echo -n "${ALLOWED_NUMBERS[$((RANDOM % 9))]}"
    done
    echo
done
