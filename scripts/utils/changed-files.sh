#!/usr/bin/env bash

set -euo pipefail

validate_commit_args() {
    if [[ $# -ne 2 ]]; then
        exit 1
    fi
}

get_changed_files() {
    local before_commit="$1"
    local after_commit="$2"

    git diff --name-only --diff-filter=ACMRT "$before_commit" "$after_commit" 2>/dev/null || echo ""
}

get_recent_changed_files() {
    git diff --name-only --diff-filter=ACMRT HEAD~1 HEAD 2>/dev/null || echo ""
}

load_artifact_files() {
    local artifact_file="$1"

    if [[ -f "$artifact_file" ]]; then
        cat "$artifact_file" 2>/dev/null || echo ""
    else
        echo ""
    fi
}

merge_files() {
    local changed_files="$1"
    local previous_failed_files="$2"

    if [[ -n "$changed_files" && -n "$previous_failed_files" ]]; then
        echo -e "$changed_files\n$previous_failed_files" | sort -u
    elif [[ -n "$changed_files" ]]; then
        echo "$changed_files"
    elif [[ -n "$previous_failed_files" ]]; then
        echo "$previous_failed_files"
    else
        echo ""
    fi
}

has_no_files() {
    local files="$1"
    [[ -z "$files" ]]
}
