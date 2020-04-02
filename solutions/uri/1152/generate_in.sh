#!/bin/bash

TEST_CASES=5

for _ in $(seq $TEST_CASES); do
    m=$((RANDOM % 2000 + 100))
    n=$((RANDOM % 2000 + m))

    echo $m $n
    for j in $(seq 0 $((m - 2))); do
        echo "$j" $((j + 1)) $((RANDOM % 30 + 10))
    done

    for j in $(seq $((n - m + 1))); do
        a=$((RANDOM % m))
        b=$((RANDOM % m))
        if [ $a == $b ]; then
            a=0
            b=1
        fi
        echo $a $b $((RANDOM % 30 + 10))
    done
done
echo 0 0
