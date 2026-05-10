#!/usr/bin/env bash

set -euo pipefail

for i in $(seq 1 10); do
    for j in $(seq 2 10); do
        for z in $(seq 1 10); do
            echo "${i} ${j} ${z}"
        done
    done
done
