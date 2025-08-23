#!/usr/bin/env bash

set -euo pipefail

for ((i = 0; i < 100; i++)); do
    n=$((RANDOM % 10 + 1))
    echo "${n}"
    for ((j = 0; j < n; j++)); do
        m=$((RANDOM % 10 + 1))
        echo "${m} $((m * (RANDOM % 9 + 2)))"
    done
done

echo "0"
