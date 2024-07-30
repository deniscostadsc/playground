#!/usr/bin/env bash

set -euo pipefail

for i in $(seq 0 30 359); do
    for j in $(seq 0 6 359); do
        echo "${i} ${j}"
    done
done
