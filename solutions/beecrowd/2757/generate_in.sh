#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=100

for _ in $(seq $TEST_CASES); do
    if [ $((RANDOM % 2)) -eq 0 ]; then
        echo "$((RANDOM % 10001))"
    else
        echo "-$((RANDOM % 10000))"
    fi
    echo "$((RANDOM % 100))"
    echo "$((RANDOM % 1000))"
done

# add corner case
echo "-9991"
echo "01"
echo "001"
