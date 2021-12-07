#!/bin/bash

TEST_CASES=9
MAX_PEOPLE=50
MAX_X=50
MAX_Y=50

echo "$TEST_CASES"

# shellcheck disable=SC2034
for i in $(seq $TEST_CASES); do
    number_of_people=$((RANDOM % MAX_PEOPLE + 1))
    echo $number_of_people

    for _ in $(seq $number_of_people); do
        echo "$((RANDOM % MAX_X)) $((RANDOM % MAX_Y))"
    done
done
