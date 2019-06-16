#!/usr/bin/env bash
for p in $(seq 0 1); do
    for j1 in $(seq 1 2); do
        for j2 in $(seq 1 2); do
            for r in $(seq 0 1); do
                for a in $(seq 0 1); do
                    echo "$p $j1 $j2 $r $a"
                done
            done
        done
    done
done
