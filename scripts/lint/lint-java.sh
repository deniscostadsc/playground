#!/usr/bin/env bash

set -euo pipefail

if [[ "${LINT_FIX:=0}" -eq 1 ]]; then
    true
else
    output=$(find . -name '*.java' -exec checkstyle -c .docker/lint/java-lint.xml {} \; 2>&1)

    echo "${output}"

    if echo "${output}" | grep -q "Checkstyle ends with [1-9][0-9]* errors"; then
        exit 1
    fi

    exit 0
fi
