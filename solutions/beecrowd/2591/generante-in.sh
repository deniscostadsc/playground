#!/usr/bin/env bash

set -euo pipefail

MAX_A_SIZE=30

echo "$((MAX_A_SIZE * MAX_A_SIZE))"
for first_a in $(seq 1 "${MAX_A_SIZE}"); do
    for second_a in $(seq 1 "${MAX_A_SIZE}"); do
        echo -n "h"
        for _ in $(seq 1 "${first_a}"); do
            echo -n "a"
        done
        echo -n "mek"
        for _ in $(seq 1 "${second_a}"); do
            echo -n "a"
        done
        echo "me"
    done
done
