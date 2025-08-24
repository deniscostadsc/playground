#!/usr/bin/env bash

set -euo pipefail

if [ "${LINT_FIX:=0}" -eq 1 ]; then
    true
else
    output=$(find . -name '*.lua' -exec luacheck --std lua54 {} \; 2>&1)
    exit_code=$?

    echo "$output"

    if echo "$output" | grep -q "warnings\|errors" && echo "$output" | grep -vq "0 warnings / 0 errors"; then
        exit 1
    fi

    exit $exit_code
fi
