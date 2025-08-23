#!/usr/bin/env bash

set -euo pipefail

CHANGED_FILES=$(git diff --name-only --diff-filter=ACMRT HEAD~1 HEAD 2>/dev/null || echo "")

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

if [[ -z "$ALL_FILES" ]]; then
    exit 0
fi

FOLDERS="$(echo "${ALL_FILES}" | xargs dirname | sort | uniq)"

EXIT_STATUS=0

for folder in ${FOLDERS}; do
    [[ -f "${folder}/problem.md" ]] || continue
    [[ -f "${folder}/WRONG" ]] || continue
    [[ -s "${folder}/WRONG" ]] && continue

    EXIT_STATUS=1
    echo "Missing content for ${folder}/WRONG"
done

exit "${EXIT_STATUS}"
