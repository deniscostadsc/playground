#!/usr/bin/env bash

set -euo pipefail

TESTCASES=100
CURRENT_PATH=$(dirname -- "${BASH_SOURCE[0]}")

for i in $(seq "${TESTCASES}"); do
    x=$((RANDOM % 1000))
    y=$((RANDOM % 1000))
    echo "${x}" >> "${CURRENT_PATH}/in-$(printf "%03d" "${i}")".txt
    echo "${y}" >> "${CURRENT_PATH}/in-$(printf "%03d" "${i}")".txt
done
