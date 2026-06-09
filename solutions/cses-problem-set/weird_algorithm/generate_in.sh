#!/usr/bin/env bash

set -euo pipefail

function random_number {
    local min max
    if [[ $# -eq 1 ]]; then
        min=0
        max=$1
    else
        min=$1
        max=$2
    fi

    echo $((RANDOM % (max - min + 1) + min))
}

n=1
while [[ ${n} -le 1000000 ]]; do
    echo "${n}"
    jump=$(random_number 1 1000)
    n=$(( n + jump ))
done
