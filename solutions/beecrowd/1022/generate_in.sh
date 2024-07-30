#!/usr/bin/env bash

set -euo pipefail

MAX_RATIONAL=100
TESTCASES=300
OPERATIONS=(/ + \* -)

echo $((TESTCASES * 4))

for _ in $(seq "${TESTCASES}"); do
    a="$((RANDOM % MAX_RATIONAL + 1))"
    b="$((RANDOM % MAX_RATIONAL + 1))"
    c="$((RANDOM % MAX_RATIONAL + 1))"
    d="$((RANDOM % MAX_RATIONAL + 1))"

    for operation in $(seq 0 3); do
        echo "${a} / ${b} ${OPERATIONS[operation]} ${c} / ${d}"
    done
done
