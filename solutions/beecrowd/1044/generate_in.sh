#!/usr/bin/env bash

set -euo pipefail

MAX_A=12
MAX_B=12

for a in $(seq "${MAX_A}"); do
    for b in $(seq "${MAX_B}"); do
        echo "${a} ${b}"
    done
done
