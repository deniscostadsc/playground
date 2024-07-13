#!/usr/bin/env bash

set -euo pipefail

for i in $(seq 1 2 10000); do
    echo "${i}"
done
