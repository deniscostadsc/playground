#!/usr/bin/env bash

set -euo pipefail

for x in -1 0 1 431 432 433 467 468 469; do
    for y in -1 0 1 431 432 433 467 468 469; do
        echo "${x} ${y}"
    done
done
