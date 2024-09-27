#!/usr/bin/env bash

set -euo pipefail

TESTCASES=400
MATRIX_SIZE=5

echo "${TESTCASES}"

for _ in $(seq "${TESTCASES}"); do
    echo
    for _ in $(seq "${MATRIX_SIZE}"); do
        for i in $(seq "${MATRIX_SIZE}"); do
            if [[ ${i} -ne 1 ]]; then
                echo -n " "
            fi
            if [[ $((RANDOM % 3)) -eq 0 ]]; then
                echo -n "1"
            else
                echo -n "0"
            fi
        done
        echo
    done
done

