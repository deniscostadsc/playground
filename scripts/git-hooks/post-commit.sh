#!/usr/bin/env bash

set -euo pipefail

cd "$(git rev-parse --show-toplevel)"

# shellcheck disable=SC1091
source "scripts/utils/environments.sh"
# shellcheck disable=SC1091
source "scripts/utils/cache.sh"

supported_environments=$(get_supported_languages)
supported_environments_count=$(get_supported_languages_count)
supported_programming_environments_count=$((supported_environments_count - 1)) # - 1 to remove sql
hash=$(get_commit_hash)

cp .cache/scripts/get-easiest-problems.sh-* .cache/scripts/OLD-get-easiest-problems.sh

folders=$(
    for file in $(git diff --name-only HEAD HEAD~1); do
        folder=$(dirname "${file}")
        [[ ! -f "${folder}/problem.md" ]] && continue
        [[ -f "${folder}/schema.sql" ]] && continue
        [[ -f "${folder}/WRONG" ]] && continue
        echo "${folder}"
    done | sort | uniq
)

for folder in ${folders}; do
    [[ -f "${folder}schema.sql" ]] && continue
    [[ -f "${folder}WRONG" ]] && continue

    if grep "${folder}" .cache/scripts/get-easiest-problems.sh-*; then
        find_cmd="find \"${folder}\""
        for ext in ${supported_environments}; do
            find_cmd="${find_cmd} -name '*.${ext}' -o"
        done
        find_cmd="${find_cmd% -o}"

        solutions=$(eval "${find_cmd}")
        solutions_count=$(wc -w <<<"${solutions}")
        if [[ ${supported_programming_environments_count} -eq ${solutions_count} ]]; then
            # exclude problems with solution in all environments
            continue
        fi
        missing_languages=$(get_missing_solutions_languages "${folder}")

        #shellcheck disable=SC2086
        concatenated_solutions=$(cat ${solutions})
        line_count=$(wc -l <<<"${concatenated_solutions}" | sed 's/ //g')
        sed -i '' -e "s#.*${folder}.*#${line_count} ${folder} (missing: ${missing_languages% })#" .cache/scripts/OLD-get-easiest-problems.sh
    fi
done

rm .cache/scripts/get-easiest-problems.sh-*
sort -nr <.cache/scripts/OLD-get-easiest-problems.sh >".cache/scripts/get-easiest-problems.sh-${hash}"
rm .cache/scripts/OLD-get-easiest-problems.sh
