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
    FOLDERS=$(find solutions/beecrowd/ -name 'problem.md' | sed 's/problem.md//g' | sort)

    pushd "$(git rev-parse --show-toplevel)" >/dev/null

    for folder in ${FOLDERS}; do
        [[ -f "${folder}schema.sql" ]] && continue
        solutions="$(get_solutions_in_all_supported_languages "${folder}")"
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
