#!/usr/bin/env bash

set -euo pipefail

for n in $(seq 4); do
    for a in $(seq 4); do
        for l in $(seq 4); do
            for p in $(seq 4); do
                echo "$n"
                echo "$a $l $p"
            done
        done
    done
done
