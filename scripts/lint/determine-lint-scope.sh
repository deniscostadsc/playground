#!/usr/bin/env bash

set -euo pipefail

if [[ $# -ne 2 ]]; then
    exit 1
fi

BEFORE_COMMIT="$1"
AFTER_COMMIT="$2"

# Get changed files, handle potential failures gracefully
CHANGED_FILES=$(git diff --name-only --diff-filter=ACMRT "$BEFORE_COMMIT" "$AFTER_COMMIT" 2>/dev/null || echo "")

if [[ -z "$CHANGED_FILES" ]]; then
    LINTS=""
else
    echo "$CHANGED_FILES" > changed_files.txt 2>/dev/null

    # Get supported lint languages from Makefile
    SUPPORTED_LINTS="c clj cpp dart go py sh ts"

    # Extract language extensions from changed files
    grep -E "\.($(echo "$SUPPORTED_LINTS" | tr ' ' '|'))$" changed_files.txt | sed 's/.*\.//' | sort -u > lint_extensions.txt

    if [[ -s lint_extensions.txt ]]; then
        LINTS=$(tr '\n' ' ' < lint_extensions.txt | sed 's/ $//')
    else
        LINTS=""
    fi
fi

echo "lints=$LINTS" >> "$GITHUB_OUTPUT"
