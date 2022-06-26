#!/usr/bin/env bash

set -euo pipefail

TESTCASES=250

voters_count=1
for i in $(seq $TESTCASES); do
    echo "$voters_count"

    if [ $((RANDOM % 3)) -eq 0 ]; then
        echo -n "0"
    else
        echo -n "1"
    fi

    for j in $(seq $voters_count); do
        if [ "$j" -eq 1 ]; then
            continue
        fi

        if [ $((RANDOM % 3)) -eq 0 ]; then
            echo -n " 0"
        else
            echo -n " 1"
        fi
    done
    echo

    if [ $((i % 2)) -eq 0 ]; then
        voters_count=$((voters_count + 3))
    fi
done
