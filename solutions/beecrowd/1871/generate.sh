#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=100000
UPPER_LIMIT=999999999

for _ in $(seq "${TEST_CASES}"); do
    echo "$(shuf -i "1-${UPPER_LIMIT} "-n 1) $(shuf -i "1-${UPPER_LIMIT}" -n 1)"
done
echo 0 0
