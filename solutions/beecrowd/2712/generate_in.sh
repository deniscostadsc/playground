#!/usr/bin/env bash

set -euo pipefail

LOWER_CASE_LETTERS=(a b c d e f g h i j k l m n o p q r s t u v w x y z)
UPPER_CASE_LETTERS=(A B C D E F G H I J K L M N O P Q R S T U V W X Y Z)
TESTCASES=1000

function generate_valid_car_plate {
    echo -n "${UPPER_CASE_LETTERS[$((RANDOM % 26))]}"
    echo -n "${UPPER_CASE_LETTERS[$((RANDOM % 26))]}"
    echo -n "${UPPER_CASE_LETTERS[$((RANDOM % 26))]}"
    echo -n "-"
    echo -n "$((RANDOM % 10))"
    echo -n "$((RANDOM % 10))"
    echo -n "$((RANDOM % 10))"
    echo "$((RANDOM % 10))"
}

function generate_probably_invalid_car_plate {
    for _ in $(seq $((RANDOM % 6 + 1))); do
        if [[ $((RANDOM % 2)) -eq 0 ]]; then
            echo -n "${UPPER_CASE_LETTERS[$((RANDOM % 26))]}"
        else
            echo -n "${LOWER_CASE_LETTERS[$((RANDOM % 26))]}"
        fi
    done
    if [[ $((RANDOM % 2)) -eq 0 ]]; then
        echo -n "-"
    fi
    for _ in $(seq $((RANDOM % 6 + 1))); do
        echo -n "$((RANDOM % 10))"
    done
    echo
}

echo "${TESTCASES}"
for _ in $(seq "${TESTCASES}"); do
    if [[ $((RANDOM % 2)) -eq 0 ]]; then
        generate_valid_car_plate
    else
        generate_probably_invalid_car_plate
    fi
done
