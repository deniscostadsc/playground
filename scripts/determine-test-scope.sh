#!/usr/bin/env bash

set -euo pipefail

if [[ $# -ne 2 ]]; then
    exit 1
fi

BEFORE_COMMIT="$1"
AFTER_COMMIT="$2"

# Get changed files, handle potential failures gracefully
CHANGED_FILES=$(git diff --name-only --diff-filter=ACMRT "$BEFORE_COMMIT" "$AFTER_COMMIT" 2>/dev/null || echo "")

if [[ -z "$CHANGED_FILES" ]]; then
    FOLDER="solutions/"
else
    echo "$CHANGED_FILES" > changed_files.txt

    # Check if only solutions changed
    if grep -q "^solutions/" changed_files.txt && ! grep -v "^solutions/" changed_files.txt; then
        # Extract problem folders and find common parent
        grep "^solutions/" changed_files.txt | sed 's|/[^/]*$||' | sort -u > problem_folders.txt

        if [[ "$(wc -l < problem_folders.txt)" -eq 1 ]]; then
            FOLDER=$(cat problem_folders.txt)
        else
            # Find common parent directory
            sed 's|/[^/]*$||' problem_folders.txt | sort -u > parent_folders.txt
            if [[ "$(wc -l < parent_folders.txt)" -eq 1 ]]; then
                FOLDER=$(cat parent_folders.txt)
            else
                FOLDER="solutions/"
            fi
        fi
    else
        FOLDER="solutions/"
    fi
fi

echo "folder=$FOLDER" >> "$GITHUB_OUTPUT"
