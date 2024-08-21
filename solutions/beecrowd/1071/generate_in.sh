#!/usr/bin/env bash

set -euo pipefail

TESTCASES=300
LIMIT=1000

for _ in $(seq "${TESTCASES}"); do
    if [[ $((RANDOM % 3)) -eq 0 ]]; then
        echo -n "-"
    fi
    echo $((RANDOM % LIMIT))
    if [[ $((RANDOM % 3)) -eq 0 ]]; then
        echo -n "-"
    fi
    echo $((RANDOM % LIMIT))
done
