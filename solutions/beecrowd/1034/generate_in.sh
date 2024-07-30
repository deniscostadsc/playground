#!/usr/bin/env bash

set -euo pipefail

TESTCASES=300
MINIMUM_N=5
MINIMUM_M=5
RANGE_N=10
RANGE_M=100000

echo "${TESTCASES}"

for _ in $(seq "${TESTCASES}"); do
    n=$((RANDOM % RANGE_N + MINIMUM_N))
    m=$((RANDOM % RANGE_M + MINIMUM_M))

    echo "${n} ${m}"

    echo -n "1 "
    a=0
    for j in $(seq $((n - 1))); do
        a=$((a + $((RANDOM % 9 + 1))))
        if [[ "${j}" == $((n - 1)) ]]; then
            echo -n "${a}"
        else
            echo -n "${a} "
        fi
    done
    echo
done
