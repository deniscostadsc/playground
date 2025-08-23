#!/usr/bin/env bash

set -euo pipefail

if [[ $# -ne 2 ]]; then
    exit 1
fi

BEFORE_COMMIT="$1"
AFTER_COMMIT="$2"

CHANGED_FILES=$(git diff --name-only --diff-filter=ACMRT "$BEFORE_COMMIT" "$AFTER_COMMIT" 2>/dev/null || echo "")

echo "DEBUG: Current changed files: '$CHANGED_FILES'"

if [[ -f "failing-changed-files-for-lint.txt" ]]; then
    PREVIOUS_FAILED_FILES=$(cat failing-changed-files-for-lint.txt 2>/dev/null || echo "")
    echo "DEBUG: Found artifact file, content: '$PREVIOUS_FAILED_FILES'"
else
    PREVIOUS_FAILED_FILES=""
    echo "DEBUG: No artifact file found"
fi

if [[ -n "$CHANGED_FILES" && -n "$PREVIOUS_FAILED_FILES" ]]; then
    ALL_FILES=$(echo -e "$CHANGED_FILES\n$PREVIOUS_FAILED_FILES" | sort -u)
    echo "DEBUG: Combining current and previous files"
elif [[ -n "$CHANGED_FILES" ]]; then
    ALL_FILES="$CHANGED_FILES"
    echo "DEBUG: Using only current files"
elif [[ -n "$PREVIOUS_FAILED_FILES" ]]; then
    ALL_FILES="$PREVIOUS_FAILED_FILES"
    echo "DEBUG: Using only previous files"
else
    ALL_FILES=""
    echo "DEBUG: No files to process"
fi

echo "DEBUG: Final combined files: '$ALL_FILES'"

if [[ -n "$ALL_FILES" ]]; then
    echo "$ALL_FILES" > failing-changed-files-for-lint.txt
else
    echo "" > failing-changed-files-for-lint.txt
fi

if [[ -s failing-changed-files-for-lint.txt ]]; then
    SUPPORTED_LINTS=$(find .docker/lint -name "*.Dockerfile" 2>/dev/null | sed 's|.*/||' | sed 's|-lint\.Dockerfile$||' | tr '\n' ' ' | sed 's/ $//')

    grep -E "\.($(echo "$SUPPORTED_LINTS" | tr ' ' '|'))$" failing-changed-files-for-lint.txt | sed 's/.*\.//' | sort -u >lint_extensions.txt

    if [[ -s lint_extensions.txt ]]; then
        LINTS=$(tr '\n' ' ' <lint_extensions.txt | sed 's/ $//')
    else
        LINTS=""
    fi
else
    LINTS=""
fi

echo "DEBUG: Determined lints: '$LINTS'"
echo "lints=$LINTS" >>"$GITHUB_OUTPUT"
