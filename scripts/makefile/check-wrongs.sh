#!/usr/bin/env bash

set -euo pipefail

CHANGED_FILES=$(git diff --name-only --diff-filter=ACMRT HEAD~1 HEAD 2>/dev/null || echo "")

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
