#!/usr/bin/env bash

set -euo pipefail

TESTCASES=1000
CURRENT_PATH=$(dirname -- "${BASH_SOURCE[0]}")

for i in $(seq "${TESTCASES}"); do
    echo "${i}" > "${CURRENT_PATH}/in-$(printf "%04d" "${i}")".txt
done
