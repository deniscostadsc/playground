#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=1000

for _ in $(seq "${TEST_CASES}"); do
    option=$((RANDOM % 3))

    if [[ ${option} -eq 0 ]]; then
        echo "R+$((RANDOM % 999999 + 1))=$((RANDOM % 999999 + 1))"
    elif [[ ${option} -eq 1 ]]; then
        echo "$((RANDOM % 999999 + 1))+L=$((RANDOM % 999999 + 1))"
    else
        echo "$((RANDOM % 999999 + 1))+$((RANDOM % 999999 + 1))=J"
    fi
done
