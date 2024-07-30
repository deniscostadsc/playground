#!/usr/bin/env bash

set -euo pipefail

TESTCASES=10000

DNA_PROTEINS=(A C G T)

for _ in $(seq "${TESTCASES}"); do
    dna_length=$((RANDOM % 22 + 10))
    genetic_code=$((RANDOM % 4 + 1))

    for _ in $(seq "${dna_length}"); do
        echo -n "${DNA_PROTEINS[$((RANDOM % 4))]}"
    done
    echo

    for _ in $(seq "${genetic_code}"); do
        echo -n "${DNA_PROTEINS[$((RANDOM % 4))]}"
    done
    echo
done
