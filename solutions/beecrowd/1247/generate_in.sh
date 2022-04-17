#!/usr/bin/env bash

set -euo pipefail

for (( i = 1; i < 30; i++ )); do
    for (( j = 1; j < 30; j++ )); do
        for (( z = 1; z < 30; z++ )); do
            echo "$i $j $z"
        done
    done
done
