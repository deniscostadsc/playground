#!/bin/bash

function get_numbers {
    base_url='https://www.ego4u.com/en/cram-up/vocabulary/numbers/generator?param='
    number=$1

    number_in_words=$(curl -s "${base_url}${number}" | \
        grep '<h3>cardinal' | \
        sed 's/^<h3>[^<]*<\/h3><ul><li>//g' | \
        sed 's/<.*//g')
    echo "${number}:${number_in_words}" >> numbers.txt
}

for number in $(seq 1 1000); do
    get_numbers "$number" &

    if [ $((number % 50)) == 0 ]; then
        sleep 3
    fi
done
