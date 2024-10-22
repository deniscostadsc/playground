#!/usr/bin/env bash

set -euo pipefail

TESTCASES=4062
MAX_CHARS_PER_LINE=1000

function chr {
    #shellcheck disable=SC2046
    #shellcheck disable=SC2059
    #shellcheck disable=SC2086
    printf \\$(printf '%03o' $1)
}

echo "${TESTCASES}"
for _ in $(seq "${TESTCASES}"); do
    for _ in $(seq $((RANDOM % MAX_CHARS_PER_LINE + 1))); do
        chr "$((RANDOM % 94 + 33))"
    done
    echo
done
