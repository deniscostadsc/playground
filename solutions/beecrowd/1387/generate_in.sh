#!/usr/bin/env bash

set -euo pipefail

for l in $(seq 1 5); do
    for r in $(seq 1 5); do
        echo "${l} ${r}"
    done
done
echo "0 0"
