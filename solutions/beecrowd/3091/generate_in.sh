#!/usr/bin/env bash

set -euo pipefail

for a in $(seq 12); do
    for b in $(seq 12); do
        echo "$a"
        echo "$b"
    done
done
