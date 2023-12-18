#!/usr/bin/env bash

set -euo pipefail

for i in $(seq 1 20); do
    for _ in $(seq "${i}"); do
        echo -n a
    done
    echo
done
