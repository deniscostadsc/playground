#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=3

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
    random_number 1 100
done
