#!/usr/bin/env bash

set -euo pipefail

MAX_NUMBER=1000
MAX_LINES=1000000

echo "${MAX_LINES}"

for _ in $(seq "${MAX_LINES}"); do
    echo "$((RANDOM % MAX_NUMBER + 1)) $((RANDOM % MAX_NUMBER + 1))"
done
