#!/usr/bin/env bash

set -euo pipefail

TESTCASES=1000

echo "$TESTCASES"
for _ in $(seq $TESTCASES); do
    if [[ $((RANDOM % 2)) -eq 0 ]]; then
        echo "$((RANDOM % 10000 + 1)) $((RANDOM % 100 + 1))"
    else
        echo "$((RANDOM % 100 + 1)) $((RANDOM % 10000 + 1))"
    fi
done

