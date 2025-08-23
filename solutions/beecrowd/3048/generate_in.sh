#!/usr/bin/env bash

set -euo pipefail

TESTCASES=400
MAX_N=498
CURRENT_PATH=$(dirname -- "${BASH_SOURCE[0]}")

for i in $(seq "${TESTCASES}"); do
    n="$((RANDOM % MAX_N + 3))"
    {
        echo "${n}"
        for _ in $(seq "${n}"); do
            if [[ $((RANDOM % 2)) -eq 0 ]]; then
                echo "1"
            else
                echo "2"
            fi
        done
    } >>"${CURRENT_PATH}/in-$(printf "%04d" "${i}")".txt
done
