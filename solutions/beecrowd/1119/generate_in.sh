#!/usr/bin/env bash

set -euo pipefail

for n in $(seq 1 19); do
    for k in $(seq 1 18); do
        for m in $(seq 1 18); do
            if [[ ${n} -gt ${k} ]] && [[ ${n} -gt ${m} ]]; then
                echo "${n} ${k} ${m}"
            fi
        done
    done
done
echo "0 0 0"
