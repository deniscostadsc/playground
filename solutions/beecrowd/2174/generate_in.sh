#!/usr/bin/env bash

set -euo pipefail

echo 676

for i in {a..z}; do
    for j in {a..z}; do
        echo "${i}${j}"
    done
done
