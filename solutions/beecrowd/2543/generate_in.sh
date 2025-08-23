#!/usr/bin/env bash

set -euo pipefail

TESTCASES=1000
MAX_N=10000
CURRENT_PATH=$(dirname -- "${BASH_SOURCE[0]}")

for i in $(seq "${TESTCASES}"); do
    n=$((RANDOM % MAX_N + 1))
    university_id=$((RANDOM % 9000 + 1000))
    echo "${n} ${university_id}" >"${CURRENT_PATH}/in-$(printf "%04d" "${i}")".txt
    for _ in $(seq "${n}"); do
        other_university_id="$((RANDOM % 9000 + 1000))"
        if [[ $((RANDOM % 10)) -eq 0 ]]; then
            other_university_id="${university_id}"
        fi
        j=0
        if [[ $((RANDOM % 2)) -eq 0 ]]; then
            j=1
        fi
        echo "${other_university_id} ${j}" >>"${CURRENT_PATH}/in-$(printf "%04d" "${i}")".txt
    done
done
