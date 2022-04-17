#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=100
MAX_N=100
MAX_M=100

function has_cheese_bread {
    n=$((RANDOM % 10))

    if [ "$n" -gt 5 ]; then
        return 0
    fi
    return 1
}

# shellcheck disable=SC2167
for _ in $(seq $TEST_CASES); do
    n=$((RANDOM % MAX_N + 1))
    m=$((RANDOM % MAX_M + 1))

    echo "$n $m"

    # shellcheck disable=SC2165
    for _ in $(seq $n); do
        for i in $(seq $m); do
            if has_cheese_bread; then
                echo -n "1"
            else
                echo -n "0"
            fi

            if [ "$i" -ne "$m" ]; then
                echo -n " "
            fi
        done
        echo
    done
done
