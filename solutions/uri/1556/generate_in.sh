#!/bin/bash

TEST_CASES=200

# shellcheck disable=SC2034
for i in $(seq $TEST_CASES); do
    test_size=$((RANDOM % 8 + 3))
    alphabet=(a b c d)
    for _ in $(seq $test_size); do
        echo -n "${alphabet[$((RANDOM % 4))]}"
    done
    echo
done
