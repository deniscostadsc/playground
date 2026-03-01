#!/usr/bin/env bash

set -euo pipefail

# shellcheck disable=SC1091
source "$(dirname "$0")/../utils/environments.sh"
# shellcheck disable=SC1091
source "$(dirname "${0}")/../utils/cache.sh"

hash=$(get_commit_hash)
if is_cache_valid "${0}" "${hash}"; then
    load_cache "${0}" "${hash}"
    exit 0
fi

output=$(
    FOLDERS=$(find solutions/beecrowd -name 'problem.md' | sed 's/problem.md//g' | sort)

    supported_environments_count=$(get_supported_languages_count)
    supported_programming_environments_count=$((supported_environments_count - 1)) # - 1 to remove sql

    for folder in ${FOLDERS}; do
        [[ -f "${folder}schema.sql" ]] && continue
        [[ -f "${folder}WRONG" ]] && continue

        solutions="$(get_solutions_in_all_supported_languages "${folder}")"
        solutions_count=$(get_supported_languages_count)
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
)

echo "${output}"

save_cache "${0}" "${hash}" "${output}"
