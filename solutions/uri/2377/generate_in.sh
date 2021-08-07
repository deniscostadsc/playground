#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=100
MAX_L=100
MAX_D=100
MAX_K=10
MAX_P=10

for _ in $(seq $TEST_CASES); do
    echo "$((RANDOM % MAX_L + 1)) $((RANDOM % MAX_D + 1))"
    echo "$((RANDOM % MAX_K + 1)) $((RANDOM % MAX_P + 1))"
done
