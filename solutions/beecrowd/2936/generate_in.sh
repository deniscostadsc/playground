#!/usr/bin/env bash

set -euo pipefail

MAX_INPUT=100

for i in $(seq 1 "${MAX_INPUT}"); do
    echo -e "${i}\n${i}\n${i}\n${i}\n${i}"
done
