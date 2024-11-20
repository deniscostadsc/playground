#!/usr/bin/env bash

set -euo pipefail

for q in $(seq 1 19); do
    for d in $(seq 1 19); do
        for p in $(seq 1 19); do
            if [[ q -lt p ]]; then
                echo "${q} ${d} ${p}"
            fi
        done
    done
done
echo "0"
