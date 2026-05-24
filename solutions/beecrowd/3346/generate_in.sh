#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=300

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
    f1_int_part=$(random_number 1 100)
    f1_float_part=$(printf "%02d" "$(random_number 1 99)")
    f1_is_negative=$(random_number 0 1)

    f2_int_part=$(random_number 1 100)
    f2_float_part=$(printf "%02d" "$(random_number 1 99)")
    f2_is_negative=$(random_number 0 1)

    if [[ f1_is_negative -eq 1 ]]; then
        echo -n "-"
    fi
    echo -n "${f1_int_part}.${f1_float_part} "
    if [[ f2_is_negative -eq 1 ]]; then
        echo -n "-"
    fi
    echo "${f2_int_part}.${f2_float_part}"

done
