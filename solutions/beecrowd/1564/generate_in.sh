#!/usr/bin/env bash

set -euo pipefail

for i in $(seq 1 100); do
    echo "${i}"
    echo 0
done
