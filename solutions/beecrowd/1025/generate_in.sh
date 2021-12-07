#!/bin/bash

for (( i = 0; i < 65; i++ )); do
    n=$((RANDOM % 1000 + 1))
    q=$((RANDOM % n + 1))

    echo "$n $q"

    for (( j = 0; j < n; j++ )); do
        echo $((RANDOM % 100 + 1))
    done

    for (( k = 0; k < q; k++ )); do
        echo $((RANDOM % 100 + 1))
    done

done
echo "0 0"
