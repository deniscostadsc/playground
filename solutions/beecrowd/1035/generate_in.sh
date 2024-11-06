#!/usr/bin/env bash

set -euo pipefail

MAX_NUMBER=4

for i in $(seq 0 "${MAX_NUMBER}"); do
    for j in $(seq 0 "${MAX_NUMBER}"); do
        for k in $(seq 0 "${MAX_NUMBER}"); do
            for l in $(seq 0 "${MAX_NUMBER}"); do
                echo "${i} ${j} ${k} ${l}"
            done
        done
    done
done
