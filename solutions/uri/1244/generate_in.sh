#!/bin/bash

alphabet=(a b c d e f g h i j k l m n o p q r s t u v w x y z A B C D E F G H I J K L M N O P Q R S T U V W X Y Z)

tests=1000

echo $tests

for (( i = 0; i < tests; i++ )); do
    n=$((RANDOM % 20 + 1))
    for (( j = 1; j <= n; j++ )); do
        for (( k = 0; k < $((RANDOM % 50 + 1)); k++ )); do
            echo -n "${alphabet[$((RANDOM % 52))]}"
        done
        if [ $j -ne $n ]; then
            echo -n " "
        fi
    done
    echo ""
done
