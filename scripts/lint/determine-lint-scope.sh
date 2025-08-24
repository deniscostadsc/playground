#!/usr/bin/env bash

set -euo pipefail
source "$(dirname "$0")/../utils/changed-files.sh"

validate_commit_args "$@"

BEFORE_COMMIT="$1"
AFTER_COMMIT="$2"

CHANGED_FILES=$(get_changed_files "$BEFORE_COMMIT" "$AFTER_COMMIT")
PREVIOUS_FAILED_FILES=$(load_artifact_files "/tmp/failing-changed-files-for-lint.txt")
ALL_FILES=$(merge_files "$CHANGED_FILES" "$PREVIOUS_FAILED_FILES")

if has_no_files "$ALL_FILES"; then
    echo "" >failing-changed-files-for-lint.txt
else
    echo "$ALL_FILES" >failing-changed-files-for-lint.txt
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

echo "lints=$LINTS" >>"$GITHUB_OUTPUT"
