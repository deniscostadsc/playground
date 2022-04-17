#!/usr/bin/env bash

set -euo pipefail

for month in $(seq 1 12); do
    for day in $(seq 1 31); do
        [ "$day" -ge 30 ] && [ "$month" -eq 2 ] && continue
        [ "$day" -eq 31 ] \
            && { [ "$month" -eq 4 ] || [ "$month" -eq 6 ] || [ "$month" -eq 9 ] || [ "$month" -eq 11 ]; } \
            && continue
        echo "$month $day"
    done
done
