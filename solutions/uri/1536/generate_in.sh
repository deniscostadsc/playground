#!/bin/bash

echo 100

for ((number = 0; number < 100; number++)); do
    echo "$((RANDOM % 5)) x $((RANDOM % 5))"
    echo "$((RANDOM % 5)) x $((RANDOM % 5))"
done
