#!/usr/bin/env bash

set -euo pipefail

TESTCASES=600
DIGITS=(1 2 3 4 5 6 7 8 9 0)
n_range=10

for (( i = 0; i < TESTCASES; i++ )); do
    n=$((RANDOM % n_range + 10))
    d=$((RANDOM % n))
    if [[ d -eq 0 ]]; then
        d=1
    fi
    echo "${n} ${d}"
    for (( j = 0; j < n; j++ )); do
        echo -n "${DIGITS[$((RANDOM % 10))]}"
    done
    echo ""
    n_range=$((n_range + 3))
done

echo "0 0"
