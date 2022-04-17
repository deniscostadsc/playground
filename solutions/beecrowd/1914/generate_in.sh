#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=250

echo $TEST_CASES

for ((i = 0;i < TEST_CASES; i++)); do
    elegible_words=$(grep -E "^[A-Za-z]{4,6}$" /usr/share/dict/words)
    word_count=$(wc -w <<< "$elegible_words")
    first_name=$(cut -d ' ' -f $((RANDOM % word_count + 1)) <<< "$elegible_words" | tr '[:upper:]' '[:lower:]')
    second_name=$(cut -d ' ' -f $((RANDOM % word_count + 1)) <<< "$elegible_words" | tr '[:upper:]' '[:lower:]')

    if [ $((RANDOM % 2)) == 0 ]; then
        echo "$first_name PAR $second_name IMPAR"
    else
        echo "$first_name IMPAR $second_name PAR"
    fi
    echo "$RANDOM $RANDOM"
done
