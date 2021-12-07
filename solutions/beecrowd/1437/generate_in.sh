#!/bin/bash

chars=(D E)

for (( i = 0; i < 1000; i++ )); do
    c=$((RANDOM  % 1000))
    echo "$c"
    for (( j = 0; j < c; j++ )); do
        echo -n "${chars[$((RANDOM  % 2))]}"
    done
    echo ""
done
