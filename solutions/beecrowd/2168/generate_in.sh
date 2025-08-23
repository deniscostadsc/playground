#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=10
MAX_N=30

# shellcheck disable=SC2167
for _ in $(seq "${TEST_CASES}"); do
    n=$((RANDOM % MAX_N + 1))

    echo "${n}"

    # shellcheck disable=SC2165
    for _ in $(seq $((n + 1))); do
        for j in $(seq $((n + 1))); do
            echo -n "$((RANDOM % 2))"

            if [[ "${j}" -ne $((n + 1)) ]]; then
                echo -n " "
            else
                echo
            fi
        done
    done
done
