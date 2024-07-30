#!/usr/bin/env bash

set -euo pipefail

echo "66"

for i in $(seq 0 10); do
    for j in $(seq 0 10); do
        if [[ $((i + j)) -lt 11 ]]; then
            echo "${i} ${j}"
        fi
    done
done
