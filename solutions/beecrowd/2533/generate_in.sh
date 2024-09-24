#!/usr/bin/env bash

set -euo pipefail

TESTCASES=1000
MAX_M=40
MAX_N=100
MAX_C=90

for _ in $(seq "${TESTCASES}"); do
    m=$((RANDOM % MAX_M + 1))
    echo "${m}"
    for _ in $(seq "${m}"); do
        echo "$((RANDOM % (MAX_N + 1))) $((RANDOM % MAX_C + 30))"
    done
done
