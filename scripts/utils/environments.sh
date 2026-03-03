#!/usr/bin/env bash

set -euo pipefail # this breaks clitest, but I kept it because of lint
set +euo pipefail

DOCKER_PATH=${DOCKER_PATH:-.docker}

function __get_supported_environments {
    folder="${1}"
    find "${folder}" -maxdepth 1 -name "*.Dockerfile" 2>/dev/null |
        sed 's|.*/||' |
        sed 's|\.Dockerfile$||' |
        sed 's|-lint$||' | # This is necessary because lint Dockerfiles (e.g. cpp-lint.Dockerfile)
        grep -v '^sql' |
        tr '\n' ' ' |
        sed 's/ $//'
}

function get_supported_languages {
    __get_supported_environments "${DOCKER_PATH}"
}

function get_supported_lints {
    __get_supported_environments "${DOCKER_PATH}/lint"
}

function get_supported_languages_count {
    supported_environments=$(get_supported_languages)
    echo "${supported_environments}" | wc -w
}

function get_solutions_in_all_supported_languages {
    folder=${1:-.} # current folder is the default
    find_cmd="find \"${folder}\""
    supported_environments=$(get_supported_languages)
    for ext in ${supported_environments}; do
        find_cmd="${find_cmd} -name '*.${ext}' -o"
    done
    find_cmd="${find_cmd% -o}"

    eval "${find_cmd}"
}

function __get_extensions_from_files {
    local files="${1}"
    supported_environments="${2}"

    echo "${files}" |
        grep -E "\.($(echo "${supported_environments}" |
            tr ' ' '|'))$" |
        sed 's/.*\.//' |
        sort -u
}

function get_language_extensions_from_files {
    local files="${1}"
    supported_languages=$(get_supported_languages)
    __get_extensions_from_files "${files}" "${supported_languages}"
}

function get_lint_extensions_from_files {
    local files="${1}"
    supported_lints=$(get_supported_lints)
    __get_extensions_from_files "${files}" "${supported_lints}"
}

function get_missing_solutions_languages {
    folder="${1}"
    missing_languages=""
    for ext in $(get_supported_languages); do
        if [[ -z "$(find "${folder}" -name "*.${ext}" 2>/dev/null)" ]]; then
            missing_languages="${missing_languages}${ext} "
        fi
    done
    echo "${missing_languages}"
}
