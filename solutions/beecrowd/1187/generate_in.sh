#!/usr/bin/env bash

if [ "$(( RANDOM % 2 ))" -eq 0 ]; then
    echo "S"
else
    echo "M"
fi

for ((i = 0; i <= 144; i++)); do
    echo "($(( RANDOM % 10 )) + 1) * 2.3" | bc
done
