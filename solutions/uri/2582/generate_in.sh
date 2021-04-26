#!/usr/bin/env bash

echo "66"

for i in $(seq 0 10); do
    for j in $(seq 0 10); do
        if [ $((i + j)) -lt 11 ]; then
            echo "$i $j"
        fi
    done
done
