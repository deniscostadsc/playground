#!/usr/bin/env bash

set -euo pipefail

# shellcheck disable=SC1091
source "$(dirname "$0")/../utils/environments.sh"
# shellcheck disable=SC1091
source "$(dirname "$0")/../utils/changed-files.sh"

CHANGED_FILES=$(get_changed_files)
PREVIOUS_FAILED_FILES=$(load_artifact_files "/tmp/failing-changed-files-for-lint.txt")
ALL_FILES=$(merge_files "${CHANGED_FILES}" "${PREVIOUS_FAILED_FILES}")
SUPPORTED_ENVIRONMENTS=$(get_supported_languages)

if [[ -z "${ALL_FILES}" ]]; then
    exit 0
fi

FOLDERS="$(echo "${ALL_FILES}" | xargs -n1 dirname 2>/dev/null | sort | uniq)"

EXIT_STATUS=0

for folder in ${FOLDERS}; do
    [[ -f "${folder}/problem.md" ]] || continue
    [[ -f "${folder}/WRONG" ]] || continue

    has_extension_in_wrong=0
    for environment in ${SUPPORTED_ENVIRONMENTS}; do
        if grep -q "^${environment}[[:space:]]" "${folder}/WRONG"; then
            has_extension_in_wrong=1
            break
        fi
    done

    if [[ ${has_extension_in_wrong} -eq 1 ]]; then
        continue
    fi

    EXIT_STATUS=1
    echo "Missing content for ${folder}/WRONG"
done

exit "${EXIT_STATUS}"
