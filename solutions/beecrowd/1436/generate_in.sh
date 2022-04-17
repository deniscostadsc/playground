#!/usr/bin/env bash

set -euo pipefail

echo "100"

for (( i = 0; i < 100; i++ )); do

    l=$((RANDOM % 9 + 1))
    if [ $((l % 2)) -eq 0 ]; then
        l=$((l + 1))
    fi

    echo -n "$l"
    for (( j = 0; j < l; j++ )); do
        echo -n " $((j + 11))"
    done
    echo ""
done
