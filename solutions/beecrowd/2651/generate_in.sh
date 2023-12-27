#!/usr/bin/env bash

set -euo pipefail

TESTCASES=400
ALPHABET=({a..z} {A..Z})
UPPER_ZELDA=(Z E L D A)
LOWER_ZELDA=(z e l d a)

for _ in $(seq "${TESTCASES}"); do
    if [[ $((RANDOM % 2)) -eq 0 ]]; then
        for _ in $(seq "$((RANDOM % 20 + 1))"); do
            echo -n "${ALPHABET[$((RANDOM % 52))]}"
        done
    fi
    for i in {0..4}; do
        if [[ $((RANDOM % 6)) -gt 0 ]]; then
            if [[ $((RANDOM % 2)) -gt 0 ]]; then
                echo -n "${UPPER_ZELDA[${i}]}"
            else
                echo -n "${LOWER_ZELDA[${i}]}"
            fi
        else
            echo -n "${ALPHABET[$((RANDOM % 52))]}"
        fi
    done
    if [[ $((RANDOM % 2)) -eq 0 ]]; then
        for _ in $(seq "$((RANDOM % 20 + 1))"); do
            echo -n "${ALPHABET[$((RANDOM % 52))]}"
        done
    fi
    echo
done
