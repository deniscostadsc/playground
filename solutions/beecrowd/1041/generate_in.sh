#!/usr/bin/env bash

set -euo pipefail

for i in $(seq -1 1); do
    for j in $(seq -1 1); do
        for k in $(seq 0 1); do
            for l in $(seq 0 1); do
                echo "${i}.${k} ${j}.${l}"
            done
        done
    done
done
