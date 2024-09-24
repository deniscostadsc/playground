#!/usr/bin/env bash

set -euo pipefail

echo "1024"
for i in 0 126 127 255; do
    for j in 0 126 127 255; do
        for x in 0 126 127 255; do
            for y in 0 126 127 255; do
                for z in 0 126 127 255; do
                    echo "${i} ${j} ${x} ${y} ${z}"
                done
            done
        done
    done
done
echo "0"
