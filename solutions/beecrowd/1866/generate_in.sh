#!/usr/bin/env bash

set -euo pipefail

TESTCASES=1000

echo "${TESTCASES}"
for i in $(seq "${TESTCASES}"); do
    echo "${i}"
done
