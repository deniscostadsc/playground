#!/usr/bin/env bash

set -euo pipefail

for i in {01..09} {10..99}; do
    echo "0.${i}"
done

for i in {1..9}; do
    for j in {00..09} {10..99}; do
        echo "${i}.${j}"
    done
done

echo "10.00"
