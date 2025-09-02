#!/usr/bin/env bash

set -euo pipefail

# shellcheck disable=SC1091
source "$(dirname "$0")/../utils/environments.sh"

SUPPORTED_ENVIRONMENTS=$(get_supported_languages | tr ' ' '|' | sed 's/|$//')
FOLDERS=$(find solutions/beecrowd/ -name 'problem.md' | sed 's/problem.md//g' | sort)

pushd "$(git rev-parse --show-toplevel)" >/dev/null

for folder in ${FOLDERS}; do
    [[ -f "${folder}schema.sql" ]] && continue

    find_cmd="find \"${folder}\""
    for ext in $(echo "$SUPPORTED_ENVIRONMENTS" | tr '|' ' '); do
        find_cmd="${find_cmd} -name '*.${ext}' -o"
    done
    find_cmd="${find_cmd% -o}"

    solutions=$(eval "$find_cmd")
    solution_count=$(echo "${solutions}" | wc -w | sed 's/ //g')

    missing_languages=""
    for ext in $(echo "$SUPPORTED_ENVIRONMENTS" | tr '|' ' '); do
        if [[ -z "$(find "${folder}" -name "*.${ext}" 2>/dev/null)" ]]; then
            missing_languages="${missing_languages}${ext} "
        fi
    done

    if [[ -n "${missing_languages}" ]]; then
        echo "${solution_count} ${folder} (missing: ${missing_languages% })"
    else
        echo "${solution_count} ${folder}"
    fi
done | sort -nr

popd >/dev/null
