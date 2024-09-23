#!/usr/bin/env bash

set -euo pipefail

TESTCASE=10000

for _ in $(seq "${TESTCASE}"); do
    echo "$((RANDOM % 1000 + 1)) $((RANDOM % 1000 + 1)) $((RANDOM % 1000 + 1))"
done
echo "0 0 0"
