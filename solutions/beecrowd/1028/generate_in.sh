#!/usr/bin/env bash

set -euo pipefail

TESTCASES_EASY=50
TESTCASES_MEDIUM=100
TESTCASES_HARD=200
TESTCASES_TOTAL=$((TESTCASES_EASY + TESTCASES_MEDIUM + TESTCASES_HARD))

MAX_F_EASY=10
MAX_F_MEDIUM=100
MAX_F_HARD=1000

echo "${TESTCASES_TOTAL}"

for _ in $(seq "${TESTCASES_EASY}"); do
    echo "$((RANDOM % MAX_F_EASY + 1)) $((RANDOM % MAX_F_EASY + 1))"
done

for _ in $(seq "${TESTCASES_MEDIUM}"); do
    echo "$((RANDOM % MAX_F_MEDIUM + 1)) $((RANDOM % MAX_F_MEDIUM + 1))"
done

for _ in $(seq "${TESTCASES_HARD}"); do
    echo "$((RANDOM % MAX_F_HARD + 1)) $((RANDOM % MAX_F_HARD + 1))"
done
