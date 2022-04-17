#!/usr/bin/env bash

set -euo pipefail

for (( i = 0; i < 4000; i++ )); do
    echo "$((RANDOM % 10000)) $((RANDOM % 10000))"
done
echo "0 0"
