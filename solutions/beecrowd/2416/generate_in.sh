#!/usr/bin/env bash

set -euo pipefail

MAX_C=10000
C_STEP=136
MAX_N=100
N_STEP=3

for c in $(seq 1 $C_STEP $MAX_C); do
    for n in $(seq 1 $N_STEP $MAX_N); do
        if [ $((RANDOM % 9)) -eq 0 ]; then
            echo "$c"
            echo "$n"
        fi
    done
done

echo 100000000
echo 1
