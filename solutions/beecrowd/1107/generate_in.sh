#!/usr/bin/env bash

set -euo pipefail

TESTCASES=1000
MAX_HEIGHT=1000
MAX_LENGTH=1000

for _ in $(seq "${TESTCASES}"); do
    height="$((RANDOM % MAX_HEIGHT + 1))"
    length="$((RANDOM % MAX_LENGTH + 1))"
    echo "${height} ${length}"
    for i in $(seq "${length}"); do
        if [[ ${i} -ne 1 ]]; then
            echo -n " "
        fi
        echo -n "$((RANDOM % (height + 1)))"
    done
    echo
done
echo "0 0"
