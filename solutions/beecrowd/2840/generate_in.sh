#!/usr/bin/env bash

set -euo pipefail

LOW_LIMIT=10
HIGH_LIMIT=1000

for i in $(seq 1 "${LOW_LIMIT}"); do
    for j in $(seq 1 "${LOW_LIMIT}"); do
        echo "${i} ${j}"
    done
done
for i in $(seq 1 53 "${HIGH_LIMIT}"); do
    for j in $(seq 1 53 "${HIGH_LIMIT}"); do
        echo "${i} ${j}"
    done
done
