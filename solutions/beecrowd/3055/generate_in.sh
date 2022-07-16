#!/usr/bin/env bash

set -euo pipefail

for i in $(seq 0 9 100); do
    for j in $(seq 0 17 100); do
        echo "$i"
        echo "$j"
    done
done
