#!/usr/bin/env bash

set -euo pipefail

TESTCASE=150
MAX_N=20

for _ in $(seq "${TESTCASE}"); do
    echo -n "$((RANDOM % MAX_N + 1)) $((RANDOM % MAX_N + 1)) "
    echo "$((RANDOM % MAX_N + 1)) $((RANDOM % MAX_N + 1))"
done

MAX_N=40

for _ in $(seq "${TESTCASE}"); do
    echo -n "$((RANDOM % MAX_N + 1)) $((RANDOM % MAX_N + 1)) "
    echo "$((RANDOM % MAX_N + 1)) $((RANDOM % MAX_N + 1))"
done
