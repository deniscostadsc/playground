#!/usr/bin/env bash

set -euo pipefail

N_MAX=500000
P_MAX=1001
Q_MAX=1001
TESTCASES=200

for _ in $(seq $TESTCASES); do
    echo "$((RANDOM  % N_MAX))"
    [[ $((RANDOM % 2)) -eq 0 ]] && C="+" || C="*"
    echo "$((RANDOM  % P_MAX)) $C $((RANDOM  % Q_MAX))"
done
