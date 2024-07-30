#!/usr/bin/env bash

set -euo pipefail

TESTS_PER_CODE=10

for code in $(seq 5); do
    for quantity in $(seq "${TESTS_PER_CODE}"); do
        echo "${code} ${quantity}"
    done
done
