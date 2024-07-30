#!/usr/bin/env bash

set -euo pipefail

chars=(a b c d e f g h i j k l m n o p q r s t u v w x y z A B C D E F G H I J K L M N O P Q R S T U V W X Y Z ' ')

for (( i = 0; i < 1000; i++ )); do
    t=$((RANDOM % 40 + 10))
    for (( j = 0; j < t; j++ )); do
        c=$((RANDOM % 63))
        echo -n "${chars[${c}]}"
    done
    echo ""
done
