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
PREVIOUS_FAILED_FILES=$(load_artifact_files "/tmp/failing-changed-files-for-build.txt")
ALL_FILES=$(merge_files "${CHANGED_FILES}" "${PREVIOUS_FAILED_FILES}")

if [[ -z "${ALL_FILES}" ]]; then
    FOLDER="solutions/"
    ENVIRONMENTS=""
    echo "" >failing-changed-files-for-build.txt
else
    echo "${ALL_FILES}" >failing-changed-files-for-build.txt

    if grep -q "^solutions/" failing-changed-files-for-build.txt && ! grep -v "^solutions/" failing-changed-files-for-build.txt; then
        grep "^solutions/" failing-changed-files-for-build.txt | sed 's|/[^/]*$||' | sort -u >problem_folders.txt

        if [[ "$(wc -l <problem_folders.txt)" -eq 1 ]]; then
            FOLDER=$(cat problem_folders.txt)
        else
            sed 's|/[^/]*$||' problem_folders.txt | sort -u >parent_folders.txt
            if [[ "$(wc -l <parent_folders.txt)" -eq 1 ]]; then
                FOLDER=$(cat parent_folders.txt)
            else
                FOLDER="solutions/"
            fi
        fi

        LANGUAGE_EXTENSIONS=$(get_language_extensions_from_files "$(grep "^solutions/" failing-changed-files-for-build.txt)" "$(get_supported_languages)")
        echo "${LANGUAGE_EXTENSIONS}" >language_extensions.txt

        if [[ -s language_extensions.txt ]]; then
            ENVIRONMENTS=$(tr '\n' ' ' <language_extensions.txt | sed 's/ $//')
        else
            ENVIRONMENTS=""
        fi
    else
        FOLDER="solutions/"
        ENVIRONMENTS=""
    fi
fi

echo "folder=${FOLDER}" >>"${GITHUB_OUTPUT}"
echo "languages=${ENVIRONMENTS}" >>"${GITHUB_OUTPUT}"
