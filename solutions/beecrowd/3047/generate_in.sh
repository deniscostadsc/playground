#!/usr/bin/env bash

set -euo pipefail

for m in $(seq 40 9 110); do
    for a in $(seq 1 13 $((m - 1))); do
        for b in $(seq 1 17 $((m - 1))); do
            echo -e "$m\n$a\n$b"
        done
    done
done
