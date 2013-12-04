#!/bin/bash

echo "30"

for (( i = 0; i < 30; i++ )); do
    echo "$(($RANDOM % 10)) $(($RANDOM % 5))"
done

