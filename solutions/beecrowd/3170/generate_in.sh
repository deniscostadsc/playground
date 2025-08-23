#!/usr/bin/env bash

set -euo pipefail

TESTCASES=600
MIN_B=2
MAX_B=999
MIN_G=102
MAX_G=899

for _ in $(seq "${TESTCASES}"); do
    echo "$((RANDOM % MAX_B + MIN_B))"
    echo "$((RANDOM % MAX_G + MIN_G))"
done
