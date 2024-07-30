#!/usr/bin/env bash

set -euo pipefail

for i in $(seq 1 23 100); do
    for j in $(seq 2 17 100); do
        for z in $(seq 1 24 100); do
            echo "${i} ${j} ${z}"
        done
    done
done
