#!/usr/bin/env bash

set -euo pipefail

TESTCASES=300


for _ in $(seq "${TESTCASES}"); do
    echo "$((RANDOM % 1000 + 1))"
    echo "$((RANDOM % 1000 + 1))"
done
