#!/usr/bin/env bash

set -euo pipefail

CHARACTERS="abcdefghijklmnopqrstuvwxyz0123456789"
TEST_CASES=200

for _ in $(seq $TEST_CASES); do
    index_1=$((RANDOM % 36))
    index_2=$((RANDOM % 36))
    while [ $index_2 -eq $index_1 ]; do
        index_2=$((RANDOM % 36))
    done
    index_3=$((RANDOM % 36))
    while [ $index_3 -eq $index_1 ] || [ $index_3 -eq $index_2 ]; do
        index_3=$((RANDOM % 36))
    done

    echo "${CHARACTERS:$index_1:1}"
    echo "${CHARACTERS:$index_2:1}"
    echo "${CHARACTERS:$index_3:1}"
done
