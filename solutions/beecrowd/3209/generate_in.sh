#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=300
MAX_K=10
MAX_O=10

function random_number {
    local min max
    if [[ $# -eq 1 ]]; then
        min=0
        max=$1
    else
        min=$1
        max=$2
    fi

    echo $((RANDOM % (max - min + 1) + min))
}

echo "${TEST_CASES}"

for _ in $(seq "${TEST_CASES}"); do
    k=$(random_number 1 "${MAX_K}")
    echo -n "${k}"

    for _ in $(seq "${k}"); do
        echo -n " $(random_number 1 "${MAX_O}")"
    done
    echo
done
