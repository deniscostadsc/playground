#!/usr/bin/env bash

set -euo pipefail

for column_1 in a b c d e f g h; do
    for row_1 in $(seq 1 8); do
        for column_2 in a b c d e f g h; do
            for row_2 in $(seq 1 8); do
                echo "${column_1}${row_1} ${column_2}${row_2}"
            done
        done
    done
done
