#!/usr/bin/env bash

set -euo pipefail

for i in $(seq 1 7); do
    for j in $(seq 1 7); do
        for k in $(seq 1 7); do
            echo "${i}.0 ${j}.0 ${k}.0"
        done
    done
done
