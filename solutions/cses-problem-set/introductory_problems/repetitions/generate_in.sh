#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=100
ALPHABET=(A C G T)

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
    for _ in $(seq "$(random_number 1 1000)"); do
        echo -n "${ALPHABET[$((RANDOM % 4))]}"
    done
    echo
done
