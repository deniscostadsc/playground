#!/usr/bin/env bash

set -euo pipefail

TESTCASES=1000
MAX_N=100
MAX_T=1000
MAX_PLANET_NAME_SUFFIX_SIZE=13
LETTERS=(a b c d e f g h i j k l m n o p q r s t u v w x y z A B C D E F G H I J K L M N O P Q R S T U V W X Y Z)

function planet_name {
    echo -n "Planeta"
    for _ in $(seq "${MAX_PLANET_NAME_SUFFIX_SIZE}"); do
        echo -n "${LETTERS[$((RANDOM % 52))]}"
    done
}

for _ in $(seq "${TESTCASES}"); do
    n=$((RANDOM % MAX_N + 1))
    echo "${n}"
    for _ in $(seq "${n}"); do
        echo "$(planet_name) $((RANDOM % 99 + 2014)) $((RANDOM % MAX_T + 1))"
    done
done
echo "0"
