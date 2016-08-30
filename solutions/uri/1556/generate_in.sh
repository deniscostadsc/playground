#!/bin/bash

TEST_CASES=200

for i in $(seq $TEST_CASES); do
    test_size=$(($RANDOM % 8 + 3))
    alphabet=(a b c d)
    for j in $(seq $test_size); do
        echo -n "${alphabet[$(($RANDOM % 4))]}"
    done
    echo
done
