#!/usr/bin/env bash

set -euo pipefail

#shellcheck disable=SC2054
#shellcheck disable=SC2191
alphabet=(
    " " B C D E F G H I J K L M N O P R S T U V W X Y
    "\]" "\[" "\\" "\;" "\'" "," "." "/" "-" "="
    1 2 3 4 5 6 7 8 9 0
)

for ((i = 0; i < 1000; i++)); do
    n=$((RANDOM % 100 + 10))
    for ((j = 0; j < n; j++)); do
        echo -n "${alphabet[$((RANDOM % ${#alphabet[@]}))]}"
    done
    echo ""
done
