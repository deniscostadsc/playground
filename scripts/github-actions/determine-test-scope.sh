#!/usr/bin/env bash

set -euo pipefail

if [[ $# -ne 2 ]]; then
    exit 1
fi

BEFORE_COMMIT="$1"
AFTER_COMMIT="$2"

CHANGED_FILES=$(git diff --name-only --diff-filter=ACMRT "$BEFORE_COMMIT" "$AFTER_COMMIT" 2>/dev/null || echo "")

if [[ -z "$CHANGED_FILES" ]]; then
    FOLDER="solutions/"
    LANGUAGES=""
else
    echo "$CHANGED_FILES" >changed_files.txt 2>/dev/null

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
