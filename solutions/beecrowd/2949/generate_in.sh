#!/usr/bin/env bash

set -euo pipefail

TESTCASES=300
MAX_N=10
ALPHABET_UPPERCASE=($(echo {A..Z}))
VOWELS_LOWERCASE=(a e i o u)
CONSONANTS_LOWERCASE=(b c d f g h j k l m n p q r s t v w x y z)
RACES=(A E H M X)
CURRENT_PATH=$(dirname -- "${BASH_SOURCE[0]}")

for i in $(seq "${TESTCASES}"); do
    n=$((RANDOM % MAX_N + 1))
    {
    echo "${n}"
    for _ in $(seq "${n}"); do
        echo -n "${ALPHABET_UPPERCASE[$((RANDOM % 26))]}"
        for (( k = 0; k < $((RANDOM % 3 + 2)); k++ )); do
            echo -n "${VOWELS_LOWERCASE[$((RANDOM % 5))]}"
            echo -n "${CONSONANTS_LOWERCASE[$((RANDOM % 21))]}"
        done
        echo " ${RACES[$((RANDOM % 5))]}"
    done
    } > "${CURRENT_PATH}/in-$(printf "%03d" "${i}")".txt
done
