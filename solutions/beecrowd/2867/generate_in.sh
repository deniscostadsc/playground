#!/usr/bin/env bash

set -euo pipefail

LIMIT_I=100
LIMIT_J=100

echo "$((LIMIT_I * LIMIT_J))"

for i in $(seq 100); do
    for j in $(seq 100); do
        echo "${i} ${j}"
    done
done
