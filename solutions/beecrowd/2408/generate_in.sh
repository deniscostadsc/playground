#!/usr/bin/env bash

set -euo pipefail

for x in $(seq 1 5); do
    for y in $(seq 1 5); do
        for z in $(seq 1 5); do
            echo "${x} ${y} ${z}"
        done
    done
done
