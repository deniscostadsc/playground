#!/bin/bash

TESTCASES=300

echo $TESTCASES

for i in $(seq $TESTCASES); do
    n=$(($RANDOM % 24 + 2))
    m=$(($RANDOM % 1000 + 10))

    echo "$n $m"

    echo -n "1 "
    a=0
    for j in $(seq $(($n - 1))); do
        a=$(($a + 5))
        echo -n "$a "
    done
    echo
done
