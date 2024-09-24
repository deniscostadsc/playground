#!/usr/bin/env bash

set -euo pipefail

TESTCASES=600

for _ in $(seq "${TESTCASES}"); do
    echo "$((RANDOM % 9999 + 1)) $((RANDOM % 99 + 1)) $((RANDOM % 99 + 1))"
done
