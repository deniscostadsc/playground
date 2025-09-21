#!/usr/bin/env bash

set -euo pipefail

# shellcheck disable=SC1091
source "$(dirname "$0")/../utils/changed-files.sh"
# shellcheck disable=SC1091
source "$(dirname "$0")/../utils/environments.sh"

validate_commit_args "$@"

BEFORE_COMMIT="$1"
AFTER_COMMIT="$2"

CHANGED_FILES=$(get_changed_files "${BEFORE_COMMIT}" "${AFTER_COMMIT}")
PREVIOUS_FAILED_FILES=$(load_artifact_files "/tmp/failing-changed-files-for-lint.txt")
ALL_FILES=$(merge_files "${CHANGED_FILES}" "${PREVIOUS_FAILED_FILES}")

echo "PREVIOUS_FAILED_FILES"
cat /tmp/failing-changed-files-for-lint.txt

if [[ -z "${ALL_FILES}" ]]; then
    echo "" >failing-changed-files-for-lint.txt
else
    echo "${ALL_FILES}" >failing-changed-files-for-lint.txt
fi

if [[ -s failing-changed-files-for-lint.txt ]]; then
    SUPPORTED_LINTS=$(get_supported_lints)
    LINT_EXTENSIONS=$(get_lint_extensions_from_files "$(cat failing-changed-files-for-lint.txt)" "${SUPPORTED_LINTS}")

    if [[ -n "${LINT_EXTENSIONS}" ]]; then
        echo "${LINT_EXTENSIONS}" | tr '\n' ' ' | sed 's/ $//' >lint_extensions.txt
        LINTS=$(tr '\n' ' ' <lint_extensions.txt | sed 's/ $//')
    else
        LINTS=""
    fi
else
    LINTS=""
fi

echo "lints=${LINTS}" >>"${GITHUB_OUTPUT}"
