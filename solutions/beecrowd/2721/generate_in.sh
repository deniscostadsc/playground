#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=300

for _ in $(seq "${TEST_CASES}"); do
    echo -n "$((RANDOM % 20 + 1)) "
    echo -n "$((RANDOM % 20 + 1)) "
    echo -n "$((RANDOM % 20 + 1)) "
    echo -n "$((RANDOM % 20 + 1)) "
    echo -n "$((RANDOM % 20 + 1)) "
    echo -n "$((RANDOM % 20 + 1)) "
    echo -n "$((RANDOM % 20 + 1)) "
    echo -n "$((RANDOM % 20 + 1)) "
    echo "$((RANDOM % 20 + 1))"
done
