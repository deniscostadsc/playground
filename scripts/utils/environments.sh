#!/usr/bin/env bash

set -euo pipefail

get_supported_languages() {
    find .docker -maxdepth 1 -name "*.Dockerfile" 2>/dev/null |
        sed 's|.*/||' |
        sed 's|\.Dockerfile$||' |
        grep -v '^sql' |
        tr '\n' ' ' |
        sed 's/ $//'
}

get_supported_lints() {
    find .docker/lint -name "*.Dockerfile" 2>/dev/null |
        sed 's|.*/||' |
        sed 's|-lint\.Dockerfile$||' |
        tr '\n' ' ' |
        sed 's/ $//'
}

get_language_extensions_from_files() {
    local files="$1"
    local supported_environments="$2"

    echo "$files" |
        grep -E "\.($(echo "$supported_environments" |
            tr ' ' '|'))$" |
        sed 's/.*\.//' |
        sort -u
}

get_lint_extensions_from_files() {
    local files="$1"
    local supported_lints="$2"

    echo "$files" |
        grep -E "\.($(echo "$supported_lints" |
            tr ' ' '|'))$" |
        sed 's/.*\.//' |
        sort -u
}

get_missing_solutions_languages() {
    folder=$1
    missing_languages=""
    for ext in $(get_supported_languages); do
        if [[ -z "$(find "${folder}" -name "*.${ext}" 2>/dev/null)" ]]; then
            missing_languages="${missing_languages}${ext} "
        fi
    done
    echo "${missing_languages}"
}
