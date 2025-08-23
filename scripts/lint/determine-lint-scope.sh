#!/usr/bin/env bash

set -euo pipefail

if [[ $# -ne 2 ]]; then
    exit 1
fi

BEFORE_COMMIT="$1"
AFTER_COMMIT="$2"

CHANGED_FILES=$(git diff --name-only --diff-filter=ACMRT "$BEFORE_COMMIT" "$AFTER_COMMIT" 2>/dev/null || echo "")

if [[ -f "failing-changed-files-for-lint.txt" ]]; then
    PREVIOUS_FAILED_FILES=$(cat failing-changed-files-for-lint.txt 2>/dev/null || echo "")
else
    PREVIOUS_FAILED_FILES=""
fi

if [[ -n "$CHANGED_FILES" && -n "$PREVIOUS_FAILED_FILES" ]]; then
    ALL_FILES=$(echo -e "$CHANGED_FILES\n$PREVIOUS_FAILED_FILES" | sort -u)
elif [[ -n "$CHANGED_FILES" ]]; then
    ALL_FILES="$CHANGED_FILES"
elif [[ -n "$PREVIOUS_FAILED_FILES" ]]; then
    ALL_FILES="$PREVIOUS_FAILED_FILES"
else
    ALL_FILES=""
fi

if [[ -z "$ALL_FILES" ]]; then
    LINTS=""
else
    echo "$ALL_FILES" > changed_files.txt 2>/dev/null

    SUPPORTED_LINTS=$(find .docker/lint -name "*.Dockerfile" 2>/dev/null | sed 's|.*/||' | sed 's|-lint\.Dockerfile$||' | tr '\n' ' ')

    grep -E "\.($(echo "$SUPPORTED_LINTS" | tr ' ' '|'))$" changed_files.txt | sed 's/.*\.//' | sort -u > lint_extensions.txt

    if [[ -s lint_extensions.txt ]]; then
        LINTS=$(tr '\n' ' ' < lint_extensions.txt | sed 's/ $//')
    else
        LINTS=""
    fi
fi

echo "lints=$LINTS" >> "$GITHUB_OUTPUT"
