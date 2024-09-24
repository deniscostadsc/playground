#!/usr/bin/env bash

set -euo pipefail

TESTCASES=90
MAX_J=500
MAX_R=500
MAX_VICTORY_POINTS=100

for _ in $(seq "${TESTCASES}"); do
    j="$((RANDOM % MAX_J + 1))"
    r="$((RANDOM % MAX_R + 1))"
    echo "${j} ${r}"

    for i in $(seq "$((j * r))"); do
        if [[ ${i} -ne 1 ]]; then
            echo -n " "
        fi
        echo -n "$((RANDOM % MAX_VICTORY_POINTS))"
    done
    echo
done
