#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=3
MAX_N=10000
MAX_M=1000

for _ in $(seq "${TEST_CASES}"); do
    n=$((RANDOM % MAX_N + 1))
    m=$((RANDOM % MAX_M + 1))

    echo "${n} ${m}"

    for _ in $(seq ${n}); do
        if [[ $((RANDOM % 2)) -eq 0 ]]; then
            echo "$((RANDOM % 2147483647))"
        else
            echo "-$((RANDOM % 2147483648))"
        fi
    done
done
echo "0 0"
