#!/usr/bin/env bash

set -euo pipefail

MAX_TEST_CASES=100
MAX_NUMBER=1000

function generate_number {
    decimal_places=$1
    decimals=""

    for _ in $(seq "$decimal_places"); do
        decimals="${decimals}$((RANDOM % 9 + 1))"
    done

    if [ "$((RANDOM % 2))" -eq 0 ]; then
        echo "$((RANDOM % MAX_NUMBER + 1)).$decimals"
    else
        echo "-$((RANDOM % MAX_NUMBER + 1)).$decimals"
    fi
}

for _ in $(seq $MAX_TEST_CASES); do
    a="$(generate_number 1)"
    b="$(generate_number 2)"
    c="$(generate_number 3)"
    d="$(generate_number 4)"

    echo "$a $b"
    echo "$c $d"
done
