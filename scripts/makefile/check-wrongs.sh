#!/usr/bin/env bash

set -euo pipefail

# Get changed files using git diff, handle potential failures gracefully
CHANGED_FILES=$(git diff --name-only --diff-filter=ACMRT HEAD~1 HEAD 2>/dev/null || echo "")

if [[ -z "$CHANGED_FILES" ]]; then
    # No changes detected, exit successfully
    exit 0
fi

FOLDERS="$(echo "${CHANGED_FILES}" | xargs dirname | sort | uniq)"

EXIT_STATUS=0

for folder in ${FOLDERS}; do
    [[ -f "${folder}/problem.md" ]] || continue
    [[ -f "${folder}/WRONG" ]] || continue
    [[ -s "${folder}/WRONG" ]] && continue

    EXIT_STATUS=1
    echo "Missing content for ${folder}/WRONG"
done

exit "${EXIT_STATUS}"
