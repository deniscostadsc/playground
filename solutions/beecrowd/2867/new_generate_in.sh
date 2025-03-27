#!/usr/bin/env bash

set -euo pipefail

echo "100"
for i in $(seq 1 100); do
    echo "10 ${i}"
done
