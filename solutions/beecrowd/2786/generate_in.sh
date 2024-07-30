#!/usr/bin/env bash

set -euo pipefail

MAX_L=100
MAX_C=100

for l in $(seq 1 "${MAX_L}"); do
    for c in $(seq 1 "${MAX_C}"); do
        if [[ $((RANDOM % 5)) -eq 0 ]]; then
            echo -e "${l}\n${c}"
        fi
    done
done
