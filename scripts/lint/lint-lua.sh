#!/usr/bin/env bash

set -euo pipefail

if [[ "${LINT_FIX:=0}" -eq 1 ]]; then
    true
else
    output=$(find . -name '*.lua' -exec luacheck --std lua54 {} \; 2>&1)

    echo "$output"

    if echo "$output" | grep -q -E "Total: [1-9][0-9]* warnings|Total: [1-9][0-9]* errors"; then
        exit 1
    fi

    exit 0
fi
