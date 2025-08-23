#!/usr/bin/env bash

set -euo pipefail

for l in $(seq 1 3 30); do
    for c in $(seq 1 3 30); do
        for r1 in $(seq 1 3 30); do
            for r2 in $(seq 1 3 30); do
                echo "${l} ${c} ${r1} ${r2}"
            done
        done
    done
done
echo "0 0 0 0"
