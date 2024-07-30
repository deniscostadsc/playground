#!/usr/bin/env bash

set -euo pipefail

TESTCASES=30

function echo_term {
    POSSIBLE_TERMS=(a b c d e 1 2 3 4 5)
    echo -n "${POSSIBLE_TERMS[$((RANDOM % 10))]}"
}

function echo_operator {
    POSSIBLE_OPERATORS=(+ / ^)
    echo -n "${POSSIBLE_OPERATORS[$((RANDOM % 3))]}"
}

echo "${TESTCASES}"

operators_count=2
for test_index in $(seq "${TESTCASES}"); do
    echo_term
    for _ in $(seq "${operators_count}"); do
        echo_operator
        echo_term
    done
    echo

    if [[ $((test_index % 10)) -eq 0 ]]; then
        operators_count=$((operators_count + 1))
    fi
done
