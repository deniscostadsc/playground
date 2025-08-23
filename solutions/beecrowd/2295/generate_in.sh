#!/usr/bin/env bash

set -euo pipefail

TESTCASES=300
MAX_FUEL=10
MAX_DISTANCE=20
CURRENT_PATH=$(dirname -- "${BASH_SOURCE[0]}")

for i in $(seq "${TESTCASES}"); do
    if [[ $((RANDOM % 1000)) -eq 0 ]]; then
        alcohol_price="${MAX_FUEL}.00"
    else
        alcohol_price="$((RANDOM % MAX_FUEL)).$((RANDOM % 10))$((RANDOM % 10))"
    fi
    if [[ $(echo "${alcohol_price} > 9.00" | bc -l) -eq 1 ]]; then
        gas_price="10.00"
    else
        gas_price="$((RANDOM % MAX_FUEL)).$((RANDOM % 10))$((RANDOM % 10))"
        while [[ $(echo "${gas_price} < ${alcohol_price}" | bc -l) -eq 1 ]]; do
            gas_price="$((RANDOM % MAX_FUEL)).$((RANDOM % 10))$((RANDOM % 10))"
        done
    fi

    if [[ $((RANDOM % 2000)) -eq 0 ]]; then
        alcohol_distance="${MAX_DISTANCE}.00"
    else
        alcohol_distance="$((RANDOM % MAX_DISTANCE)).$((RANDOM % 10))$((RANDOM % 10))"
    fi
    if [[ $(echo "${alcohol_distance} > 19.00" | bc -l) -eq 1 ]]; then
        gas_distance="${MAX_DISTANCE}.00"
    else
        gas_distance="$((RANDOM % MAX_DISTANCE)).$((RANDOM % 10))$((RANDOM % 10))"
        while [[ $(echo "${gas_distance} < ${alcohol_distance}" | bc -l) -eq 1 ]]; do
            gas_distance="$((RANDOM % MAX_DISTANCE)).$((RANDOM % 10))$((RANDOM % 10))"
        done
    fi

    echo "${alcohol_price} ${gas_price} ${alcohol_distance} ${gas_distance}" >"${CURRENT_PATH}/in-$(printf "%03d" "${i}")".txt
done
