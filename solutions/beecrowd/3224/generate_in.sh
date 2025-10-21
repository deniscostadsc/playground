#!/usr/bin/env bash

set -euo pipefail

TESTCASES=30
MAX_A=10

for _ in $(seq "${TESTCASES}"); do
    for _ in $(seq "$((RANDOM % MAX_A + 1))"); do
        echo -n "a"
    done
    echo "h"

    for _ in $(seq "$((RANDOM % MAX_A + 1))"); do
        echo -n "a"
    done
    echo "h"
done
