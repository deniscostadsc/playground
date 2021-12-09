#!/usr/bin/env bash

for (( i = 0; i < 1000; i++ )); do
    r1=$((RANDOM % 1000 + 1))

    x1=$((RANDOM % 1000 + 1))
    y1=$((RANDOM % 1000 + 1))

    if [ $((RANDOM % 4)) -eq 0 ]; then
        x1=$((x1 * -1))
    fi

    if [ $((RANDOM % 4)) -eq 0 ]; then
        y1=$((y1 * -1))
    fi

    echo -n "$r1 $x1 $y1"

    r2=$((RANDOM % 1000 + 1))

    x2=$((RANDOM % 1000 + 1))
    y2=$((RANDOM % 1000 + 1))

    if [ $((RANDOM % 4)) -eq 0 ]; then
        x2=$((x2 * -1))
    fi

    if [ $((RANDOM % 4)) -eq 0 ]; then
        y2=$((y2 * -1))
    fi

    echo " $r2 $x2 $y2"
done
