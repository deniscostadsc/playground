#!/usr/bin/env bash

set -euo pipefail
source "$(dirname "$0")/../utils/changed-files.sh"

validate_commit_args "$@"

BEFORE_COMMIT="$1"
AFTER_COMMIT="$2"

CHANGED_FILES=$(get_changed_files "$BEFORE_COMMIT" "$AFTER_COMMIT")
PREVIOUS_FAILED_FILES=$(load_artifact_files "/tmp/failing-changed-files-for-build.txt")
ALL_FILES=$(merge_files "$CHANGED_FILES" "$PREVIOUS_FAILED_FILES")

if has_no_files "$ALL_FILES"; then
    FOLDER="solutions/"
    LANGUAGES=""
else
    echo "$ALL_FILES" >changed_files.txt 2>/dev/null

    if grep -q "^solutions/" changed_files.txt && ! grep -v "^solutions/" changed_files.txt; then
        grep "^solutions/" changed_files.txt | sed 's|/[^/]*$||' | sort -u >problem_folders.txt

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

        SUPPORTED_EXTENSIONS=$(find .docker -name "*.Dockerfile" 2>/dev/null | sed 's|.*/||' | sed 's|\.Dockerfile$||' | tr '\n' '|' | sed 's/|$//')

        grep "^solutions/" changed_files.txt | grep -E "\.($SUPPORTED_EXTENSIONS)$" | sed 's/.*\.//' | sort -u >language_extensions.txt

        if [[ -s language_extensions.txt ]]; then
            LANGUAGES=$(tr '\n' ' ' <language_extensions.txt | sed 's/ $//')
        else
            LANGUAGES=""
        fi
    else
        FOLDER="solutions/"
        LANGUAGES=""
    fi
fi

echo "folder=$FOLDER" >>"$GITHUB_OUTPUT"
echo "languages=$LANGUAGES" >>"$GITHUB_OUTPUT"
