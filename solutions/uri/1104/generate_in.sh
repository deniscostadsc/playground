#!/bin/bash

for i in $(seq 100); do
    a=$(($RANDOM % 100 + 1))
    b=$(($RANDOM % 100 + 1))

    echo "$a $b"
    
    line=""

    for i in $(seq $a); do
        if [[ $i == "1" ]]; then
            line="$line$(($RANDOM % 100 + 1))"
        else
            line="$line $(($RANDOM % 100 + 1))"
        fi
    done
    tr ' ' '\n' <<< $line | sort -n | tr '\n' ' '
    echo

    line=""
    for i in $(seq $b); do
        if [[ $i == "1" ]]; then
            line="$line$(($RANDOM % 100 + 1))"
        else
            line="$line $(($RANDOM % 100 + 1))"
        fi
    done
    tr ' ' '\n' <<< $line | sort -n | tr '\n' ' '
    echo

done
echo "0 0"
