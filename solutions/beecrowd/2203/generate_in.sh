#!/usr/bin/env bash

set -euo pipefail

for i in $(seq 0 19 100); do
    for j in $(seq 0 19 100); do
        for k in $(seq 0 19 100); do
            for l in $(seq 0 19 100); do
                for m in $(seq 0 19 100); do
                    for n in $(seq 0 19 100); do
                        for o in $(seq 0 19 100); do
                            echo "${i} ${j} ${k} ${l} ${m} ${n} ${o}"
                        done
                    done
                done
            done
        done
    done
done
