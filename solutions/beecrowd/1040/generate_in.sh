#!/usr/bin/env bash

set -euo pipefail

TESTCASES=1000
CURRENT_PATH=$(dirname -- "${BASH_SOURCE[0]}")

function get_random_grade {
    if [[ $((RANDOM % 100)) -eq 0 ]]; then
        echo "10.0"
    else
        echo "$((RANDOM % 10)).$((RANDOM % 10))"
    fi
}

for i in $(seq "${TESTCASES}"); do
    n1=$(get_random_grade)
    n2=$(get_random_grade)
    n3=$(get_random_grade)
    n4=$(get_random_grade)
    average_py=$(python3 -c "print(f\"{(${n1} * 2.0 + ${n2} * 3.0 + ${n3} * 4.0 + ${n4}) / 10.0:.1f}\")")

    {
        echo "${n1} ${n2} ${n3} ${n4}"
        if (($(echo "${average_py} >= 5.0" | bc -l))) && (($(echo "${average_py} <= 6.9" | bc -l))); then
            get_random_grade
        fi
    } >>"${CURRENT_PATH}/in-$(printf "%04d" "${i}")".txt
done
