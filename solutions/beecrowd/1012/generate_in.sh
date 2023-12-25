#!/usr/bin/env bash

set -euo pipefail

for int_1 in $(seq 1 2 6); do
    for int_2 in $(seq 2 2 7); do
        for int_3 in $(seq 3 2 8); do
            for fract_1 in $(seq 1 3 5); do
                for fract_2 in $(seq 1 3 5); do
                    for fract_3 in $(seq 1 3 5); do
                        echo "${int_1}.${fract_1} ${int_2}.${fract_2} ${int_3}.${fract_3}"
                    done
                done
            done
        done
    done
done
