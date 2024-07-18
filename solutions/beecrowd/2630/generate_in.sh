#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=10000
CONVERSIONS=("eye" "mean" "max" "min")

echo "${TEST_CASES}"

for _ in $(seq "${TEST_CASES}"); do
    echo "${CONVERSIONS[$((RANDOM % 4))]}"
    echo "$((RANDOM % 256)) $((RANDOM % 256)) $((RANDOM % 256))"
done
