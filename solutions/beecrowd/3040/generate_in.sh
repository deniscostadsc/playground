#!/usr/bin/env bash

set -euo pipefail

echo "2662"

for h in $(seq 195 205) $(seq 295 305); do
    for d in $(seq 45 55); do
        for g in $(seq 145 155); do
            echo "${h} ${d} ${g}"
        done
    done
done
