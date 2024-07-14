#!/usr/bin/env bash

set -euo pipefail

alphabet=(a b c d e f g h i j k l m n o p q r s t u v w x y z A B C D E F G H I J K L M N O P Q R S T U V W X Y Z)

tests=4000

echo "${tests}"

for _ in $(seq "${tests}"); do
    n=$((RANDOM % 16 + 1))
    for _ in $(seq "${n}"); do
        echo -n "${alphabet[$((RANDOM % 52))]}"
    done
    echo ""
done
