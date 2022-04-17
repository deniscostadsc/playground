#!/usr/bin/env bash

set -euo pipefail

testcases_qty=300

for (( i = 0; i < testcases_qty; i++ )); do
    echo "$((RANDOM % 1000 + 1)) $((RANDOM % 1000 + 1)) $((RANDOM % 1000 + 1))"
done
echo "0"
