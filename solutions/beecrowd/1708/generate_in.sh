#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=300
LIMIT_X=9
LIMIT_Y=10
INCREASE_X=100
INCREASE_Y=100
MAX_X=9999
MAX_Y=10000

for _ in $(seq "${TEST_CASES}"); do
    x=$((RANDOM % LIMIT_X + 1))
    y=$((RANDOM % LIMIT_Y + 1))

    while [[ ${x} -ge ${y} ]]; do
        y=$((RANDOM % LIMIT_Y + 1))
    done

    echo "${x} ${y}"

    LIMIT_X=$((LIMIT_X + INCREASE_X))
    LIMIT_Y=$((LIMIT_Y + INCREASE_Y))

    if [[ ${LIMIT_X} -gt ${MAX_X} ]]; then
        LIMIT_X=${MAX_X}
    fi

    if [[ ${LIMIT_Y} -gt ${MAX_Y} ]]; then
        LIMIT_Y=${MAX_Y}
    fi
done
