#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=50
MAX_N=80
N_INCREMENT=5
MAX_NUMBER_LENGTH=5
NUMBER_LENGTH_INCREMENT=5

# shellcheck disable=SC2167
for _ in $(seq "$TEST_CASES"); do
    n=$((RANDOM % MAX_N + 1))
    echo "$n"

    # shellcheck disable=SC2165
    # shellcheck disable=SC2167
    for _ in $(seq $n); do
        # shellcheck disable=SC2165
        for _ in $(seq "$MAX_NUMBER_LENGTH"); do
            echo -n "$((RANDOM % 10))"
        done
        echo
    done

    MAX_N=$((MAX_N + N_INCREMENT))
    MAX_NUMBER_LENGTH=$((MAX_NUMBER_LENGTH + NUMBER_LENGTH_INCREMENT))
    if [ "$MAX_NUMBER_LENGTH" -gt 200 ]; then
        MAX_NUMBER_LENGTH=200
    fi
done
