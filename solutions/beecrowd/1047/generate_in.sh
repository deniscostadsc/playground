#!/usr/bin/env bash

set -euo pipefail

for start_hour in $(seq 0 2); do
    for start_minute in $(seq 0 3) $(seq 56 59); do
        for end_hour in $(seq 0 2); do
            for end_minute in $(seq 0 3) $(seq 56 59); do
                echo -n "${start_hour} ${start_minute} "
                echo "${end_hour} ${end_minute}"
            done
        done
    done
done
