#!/usr/bin/env bash

for i in $(seq 0 100); do
    for j in $(seq 0 100); do
        difference=$((i - j))
        [ $difference -lt -5 ] && continue
        [ $difference -gt 5 ] && continue

        echo $i $j
    done
done
