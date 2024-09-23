#!/usr/bin/env bash

set -euo pipefail

TESTCASES=1000
MAX_LEAVES=500

function print_unique_numbers {
    count=$1
    max_index=$((MAX_LEAVES + 1))
    mapfile -t possible_numbers < <(seq 0 "${MAX_LEAVES}")

    for i in $(seq "${count}"); do
        picked_index=$((RANDOM % max_index))
        echo -n "${possible_numbers[${picked_index}]}"
        unset "possible_numbers[${picked_index}]"
        possible_numbers=("${possible_numbers[@]}")
        [[ ${i} -eq ${count} ]] && echo || echo -n " "
        max_index=$((max_index - 1))
    done
}

echo "${TESTCASES}"
for _ in $(seq "${TESTCASES}"); do
    n=$((RANDOM % MAX_LEAVES + 1))
    echo "${n}"
    print_unique_numbers "${n}"
done
