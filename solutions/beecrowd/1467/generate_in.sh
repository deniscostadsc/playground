#!/usr/bin/env bash

set -euo pipefail

for i in $(seq 0 1); do
    for j in $(seq 0 1); do
        for z in $(seq 0 1); do
            echo "${i} ${j} ${z}"
        done
    done
done
