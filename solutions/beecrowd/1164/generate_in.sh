#!/usr/bin/env bash

set -euo pipefail

TESTCASES=100

echo "$TESTCASES"

for n in $(seq 20); do
    echo "$n"
done

#number=$((10 ** 8))
number=21
for n in $(seq 80); do
    echo -n "$number"
    if [ $number -ge $((10 ** 8)) ]; then
        echo " maior"
    else
        echo
    fi
    number=$((number + (n ** 3)))
done
