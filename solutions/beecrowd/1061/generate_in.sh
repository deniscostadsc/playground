#!/usr/bin/env bash

set -euo pipefail

TESTCASES=500
CURRENT_PATH=$(dirname -- "${BASH_SOURCE[0]}")

for i in $(seq "${TESTCASES}"); do
    first_day=$((RANDOM % 15 + 1))
    second_day=$((RANDOM % 15 + 15))
    while [[ ${second_day} -lt ${first_day} ]]; do
        second_day=$((RANDOM % 15 + 15))
    done
    second_hours=$((RANDOM % 12))
    second_minutes=$((RANDOM % 60))
    second_seconds=$((RANDOM % 60))
    if [[ ${second_day} -eq ${first_day} ]]; then
        first_hours=$((RANDOM % 6))
        while [[ ${second_hours} -lt ${first_hours} ]]; do
            second_hours=$((RANDOM % 12))
        done
        first_minutes=$((RANDOM % 30))
        while [[ ${second_minutes} -lt ${first_minutes} ]]; do
            second_minutes=$((RANDOM % 60))
        done
        first_seconds=$((RANDOM % 30))
        while [[ ${second_seconds} -lt ${first_seconds} ]]; do
            second_seconds=$((RANDOM % 60))
        done
    else
        first_hours=$((RANDOM % 12))
        first_minutes=$((RANDOM % 60))
        first_seconds=$((RANDOM % 60))
    fi
    # echo "Dia ${first_day}" > "${CURRENT_PATH}/in-$(printf "%03d" "${i}")".txt
    # echo "${first_hours} : ${first_minutes} : ${first_seconds}" >> "${CURRENT_PATH}/in-$(printf "%03d" "${i}")".txt
    # echo "Dia ${second_day}" >> "${CURRENT_PATH}/in-$(printf "%03d" "${i}")".txt
    # echo "${second_hours} : ${second_minutes} : ${second_seconds}" >> "${CURRENT_PATH}/in-$(printf "%03d" "${i}")".txt

    {
        echo "Dia ${first_day}"
        echo "${first_hours} : ${first_minutes} : ${first_seconds}"
        echo "Dia ${second_day}"
        echo "${second_hours} : ${second_minutes} : ${second_seconds}"
    } >"${CURRENT_PATH}/in-$(printf "%03d" "${i}")".txt
done
