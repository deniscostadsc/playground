#!/usr/bin/env bash

set -euo pipefail

for a in $(seq 1 13); do
    for b in $(seq 1 13); do
        echo "$a $b"
    done
done
