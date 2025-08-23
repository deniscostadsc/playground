#!/usr/bin/env bash

set -euo pipefail

TESTCASES=1000
MAX_N=1000
MAX_T=100
MAX_V=121
CURRENT_PATH=$(dirname -- "${BASH_SOURCE[0]}")

for i in $(seq "${TESTCASES}"); do
    n=$((RANDOM % MAX_N + 1))
    echo "${n}" >"${CURRENT_PATH}/in-$(printf "%04d" "${i}")".txt
    for _ in $(seq "${n}"); do
        t=$((RANDOM % MAX_T + 1))
        v=$((RANDOM % MAX_V))
        echo "${t} ${v}" >>"${CURRENT_PATH}/in-$(printf "%04d" "${i}")".txt
    done
done
