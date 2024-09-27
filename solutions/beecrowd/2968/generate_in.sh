#!/usr/bin/env bash

set -euo pipefail

TESTCASES=100

max_v=10
max_n=10

echo "1 1"
for i in $(seq "${TESTCASES}"); do
    echo "$((RANDOM % max_v + 1)) $((RANDOM % max_n + 1))"
    if [[ $((i % 10)) -eq 0 ]] && [[ ${max_v} -le 10000 ]]; then
        max_v=$((max_v * 10))
        max_n=$((max_n * 10))
    fi
done
