#!/usr/bin/env bash

set -euo pipefail

test_cases=10
minimum_city_number=5
maximum_city_number=50

for _ in $(seq $test_cases); do
    n=$((RANDOM % maximum_city_number + minimum_city_number))
    e=$n

    echo "$n $e"

    for j in $(seq $e); do
        destiny=$((RANDOM % n + 1))

        if [[ $j == "$destiny" ]]; then
            if [[ $j == 1 ]]; then
                destiny=$((destiny + 1))
            else
                destiny=$((destiny - 1))
            fi
        fi

        echo "$j $destiny $((RANDOM % 9 + 1))"
    done

    k=$((n * n - n))

    echo "$k"
    for j in $(seq $n); do
        for k in $(seq $n); do
            if [[ $j != "$k" ]]; then
                echo "$j $k"
            fi
        done
    done
done

echo "0 0"
