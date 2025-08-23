#!/usr/bin/env bash

set -euo pipefail

TESTCASES=1000
TOTAL_CHARS=14
LETTERS=(a b c d e f g h i j k l m n o p q r s t u v w x y z A B C D E F G H I J K L M N O P Q R S T U V W X Y Z)
NUMBERS=(1 2 3 4 5 6 7 8 9 0)

function print_letters {
    count_letters=${1}

    for _ in $(seq "${count_letters}"); do
        echo -n "${LETTERS[$((RANDOM % 52))]}"
    done
}

function print_numbers {
    count_numbers=${1}

    echo -n "${NUMBERS[$((RANDOM % 9))]}"

    if [[ "${count_numbers}" -gt 1 ]]; then
        count_numbers=$((count_numbers - 1))

        for _ in $(seq "${count_numbers}"); do
            echo -n "${NUMBERS[$((RANDOM % 10))]}"
        done
    fi
}

echo "${TESTCASES}"

for _ in $(seq "${TESTCASES}"); do
    first_number=$(print_numbers $(((RANDOM % 3) + 1)))
    second_number=$(print_numbers $(((RANDOM % 3) + 1)))
    third_number=$(print_numbers $(((RANDOM % 3) + 1)))

    count_numbers=$(echo -n "${first_number}${second_number}${third_number}" | wc -c)
    remaining_letters=$((TOTAL_CHARS - count_numbers - 2))

    case $((RANDOM % 5)) in
    0)
        echo -n "$(print_letters "${remaining_letters}")"
        echo -n "${first_number}"
        echo -n "$(print_letters 1)"
        echo -n "${second_number}"
        echo -n "$(print_letters 1)"
        echo -n "${third_number}"
        ;;
    1)
        echo -n "${first_number}"
        echo -n "$(print_letters "${remaining_letters}")"
        echo -n "$(print_letters 1)"
        echo -n "${second_number}"
        echo -n "$(print_letters 1)"
        echo -n "${third_number}"
        ;;
    2)
        echo -n "${first_number}"
        echo -n "$(print_letters 1)"
        echo -n "$(print_letters "${remaining_letters}")"
        echo -n "${second_number}"
        echo -n "$(print_letters 1)"
        echo -n "${third_number}"
        ;;
    3)
        echo -n "${first_number}"
        echo -n "$(print_letters 1)"
        echo -n "${second_number}"
        echo -n "$(print_letters "${remaining_letters}")"
        echo -n "$(print_letters 1)"
        echo -n "${third_number}"
        ;;
    4)
        echo -n "${first_number}"
        echo -n "$(print_letters 1)"
        echo -n "${second_number}"
        echo -n "$(print_letters 1)"
        echo -n "${third_number}"
        echo -n "$(print_letters "${remaining_letters}")"
        ;;
    esac

    echo
done
