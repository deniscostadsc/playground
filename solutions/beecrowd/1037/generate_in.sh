#/usr/bin/env bash

set -euo pipefail

for int in $(seq -1 101); do
    for decimal in 00 01 99; do
        echo "${int}.${decimal}"
    done
done
