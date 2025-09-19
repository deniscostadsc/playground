#!/usr/bin/env bash

set -euo pipefail

# shellcheck disable=SC1091
source "$(dirname "$0")/../utils/environments.sh"

FOLDERS=$(find solutions/beecrowd -name 'problem.md' | sed 's/problem.md//g' | sort)

for folder in ${FOLDERS}; do
    [[ -f "${folder}schema.sql" ]] && continue
    [[ -f "${folder}WRONG" ]] && continue

    supported_environments=$(get_supported_languages)
    supported_environments_count=$(echo "${supported_environments}" | wc -w)
    supported_programming_environments_count=$((supported_environments_count - 1)) # - 1 to remove sql

    find_cmd="find \"${folder}\""
    for ext in ${supported_environments}; do
        find_cmd="${find_cmd} -name '*.${ext}' -o"
    done
    find_cmd="${find_cmd% -o}"

    solutions=$(eval "${find_cmd}")
    solutions_count=$(wc -w <<<"${solutions}")
    missing_languages=$(get_missing_solutions_languages "${folder}")

    if [[ ${supported_programming_environments_count} -eq ${solutions_count} ]]; then
        # exclude problems with solution in all environments
        continue
    fi

    #shellcheck disable=SC2086
    concatenated_solutions=$(cat ${solutions})
    line_count=$(wc -l <<<"${concatenated_solutions}" | sed 's/ //g')
    if [[ -n "${missing_languages}" ]]; then
        echo "${line_count} ${folder} (missing: ${missing_languages% })"
    else
        echo "${line_count} ${folder}"
    fi
done | sort -n
