#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=1000

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

for _ in $(seq "${TEST_CASES}"); do
    coins_quantity=$(random_number 1 20)
    echo "${coins_quantity}"
    for coin in $(seq 1 "${coins_quantity}"); do
        echo "${coin}"
    done
    random_number 1 "${coins_quantity}"
done
