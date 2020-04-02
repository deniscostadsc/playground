#!/bin/bash

test_cases=100

function random_number_for_2048 {
    if [[ $((RANDOM % 2)) == 0 ]]; then
        echo -n 0
    else
        echo -n $((2 ** (RANDOM % 11 + 1)))
    fi
}

echo "$test_cases"

# shellcheck disable=SC2034
for i in $(seq $test_cases); do
    for j in $(seq 4); do
        for k in $(seq 4); do
            if [[ $k == 4 ]]; then
                echo -n "$(random_number_for_2048)"
            else
                echo -n "$(random_number_for_2048) "
            fi
        done
        echo
    done
done
