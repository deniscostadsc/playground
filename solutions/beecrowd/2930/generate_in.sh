#!/usr/bin/env bash

set -euo pipefail

for e in $(seq 1 24); do
    for d in $(seq 1 24); do
        echo "${e} ${d}"
    done
done
