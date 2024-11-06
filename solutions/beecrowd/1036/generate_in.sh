#!/usr/bin/env bash

set -euo pipefail

MAX_NUMBER=9

for i in $(seq 0 "${MAX_NUMBER}"); do
    for j in $(seq 0 "${MAX_NUMBER}"); do
        for k in $(seq 0 "${MAX_NUMBER}"); do
            echo "${i}.$((RANDOM % 10)) ${j}.$((RANDOM % 10)) ${k}.$((RANDOM % 10))"
        done
    done
done
