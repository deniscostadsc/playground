#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=9

echo "${TEST_CASES}"

for player_1_move in "ataque" "pedra" "papel"; do
    for player_2_move in "ataque" "pedra" "papel"; do
        echo "${player_1_move}"
        echo "${player_2_move}"
    done
done
