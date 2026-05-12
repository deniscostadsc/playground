#!/usr/bin/env bash

set -euo pipefail

for n in $(seq 1 100); do
    for x in $(seq 1 1000); do
        echo "${n} ${x}"
    done
done
