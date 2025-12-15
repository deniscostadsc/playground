#!/usr/bin/env bash

set -euo pipefail

# shellcheck disable=SC1091
source "$(dirname "${0}")/../utils/environments.sh"
# shellcheck disable=SC1091
source "$(dirname "${0}")/../utils/cache.sh"

hash=$(get_tree_hash)
if is_cache_valid "${0}" "${hash}"; then
    load_cache "${0}" "${hash}"
    exit 0
fi

output=$(
    supported_environments=$(get_supported_languages | tr ' ' '|' | sed 's/|$//')
    FOLDERS=$(find solutions/beecrowd/ -name 'problem.md' | sed 's/problem.md//g' | sort)

    pushd "$(git rev-parse --show-toplevel)" >/dev/null

    for folder in ${FOLDERS}; do
        [[ -f "${folder}schema.sql" ]] && continue

        find_cmd="find \"${folder}\""
        for ext in $(echo "${supported_environments}" | tr '|' ' '); do
            find_cmd="${find_cmd} -name '*.${ext}' -o"
        done
        find_cmd="${find_cmd% -o}"

        solutions=$(eval "${find_cmd}")
        solutions_count=$(echo "${solutions}" | wc -w | sed 's/ //g')
        missing_languages=$(get_missing_solutions_languages "${folder}")

        if [[ -n "${missing_languages}" ]]; then
            echo "${solutions_count} ${folder} (missing: ${missing_languages% })"
        else
            echo "${solutions_count} ${folder}"
        fi
    done | sort -nr

    popd >/dev/null
)

echo "${output}"

save_cache "${0}" "${hash}" "${output}"
