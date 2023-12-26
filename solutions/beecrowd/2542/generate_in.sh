#!/usr/bin/env bash

set -euo pipefail

TESTCASES=80
MAX_NUMBER=80

for _ in $(seq 1 ${TESTCASES}); do
    n=$((RANDOM % MAX_NUMBER + 1))
    m=$((RANDOM % MAX_NUMBER + 1))
    l=$((RANDOM % MAX_NUMBER + 1))

    echo "${n}"
    echo "${m} ${l}"

    for _ in $(seq 1 $m); do
        if [[ n -eq 1 ]]; then
            echo "$((RANDOM % 100 + 1))"
        else
            for _ in $(seq 1 $((n - 1))); do
                echo -n "$((RANDOM % 100 + 1)) "
            done
            echo "$((RANDOM % 100 + 1))"
        fi
    done

    for _ in $(seq 1 $l); do
        if [[ n -eq 1 ]]; then
            echo "$((RANDOM % 100 + 1))"
        else
            for _ in $(seq 1 $((n - 1))); do
                echo -n "$((RANDOM % 100 + 1)) "
            done
            echo "$((RANDOM % 100 + 1))"
        fi
    done

    echo "$((RANDOM % m + 1)) $((RANDOM % l + 1))"
    echo "$((RANDOM % n + 1))"
done
