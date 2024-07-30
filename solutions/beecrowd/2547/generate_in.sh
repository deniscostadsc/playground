#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=100

for _ in $(seq "${TEST_CASES}"); do
    a_min=$((RANDOM % 201 + 50))
    a_max=$((RANDOM % 201 + 50))

    if [[ ${a_min} -gt ${a_max} ]]; then
        x=${a_min}
        a_min=${a_max}
        a_max=${x}
    fi

    echo "100 ${a_min} ${a_max}"
    for _ in $(seq 100); do
        echo "$((RANDOM % 201 + 50))"
    done
done
