#!/usr/bin/env bash

set -euo pipefail

TESTCASES=300

max_item=7
repeated_max_item=0
file_to_save_numbers=$(mktemp)

function pick_number {
    picked_numbers_count=$(wc -l <"${file_to_save_numbers}")
    if [[ ${picked_numbers_count} -eq 6 ]] || [[ ${picked_numbers_count} -eq 0 ]]; then
        picked_number=$((RANDOM % max_item + 1))
        echo "${picked_number}" >"${file_to_save_numbers}"
    else
        picked_number=$((RANDOM % max_item + 1))
        while grep -Fxq "${picked_number}" "${file_to_save_numbers}"; do
            picked_number=$((RANDOM % max_item + 1))
        done
        echo "${picked_number}" >>"${file_to_save_numbers}"

    fi
    echo "${picked_number}"
}

for _ in $(seq "${TESTCASES}"); do
    for _ in {1..5}; do
        picked_number=$(pick_number)
        echo -n "${picked_number} "
    done
    picked_number=$(pick_number)
    echo "${picked_number}"

    for _ in {1..5}; do
        picked_number=$(pick_number)
        echo -n "${picked_number} "
    done
    picked_number=$(pick_number)
    echo "${picked_number}"

    if [[ ${max_item} -lt 10 ]] && [[ ${repeated_max_item} -lt 5 ]]; then
        repeated_max_item=$((repeated_max_item + 1))
    elif [[ ${max_item} -lt 10 ]] && [[ ${repeated_max_item} -eq 5 ]]; then
        repeated_max_item=0
        max_item=$((max_item + 1))
    elif [[ ${max_item} -gt 99 ]]; then
        max_item=99
    else
        max_item=$((max_item + 1))
    fi
done
