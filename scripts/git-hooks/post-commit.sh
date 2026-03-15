#!/usr/bin/env bash

#
# TODO: cache update for count-solutions.sh is not working
#

set -euo pipefail

cd "$(git rev-parse --show-toplevel)"

# shellcheck disable=SC1091
source "scripts/utils/environments.sh"
# shellcheck disable=SC1091
source "scripts/utils/cache.sh"

commit_hash=$(get_commit_hash)
tree_hash=$(get_tree_hash)

# TODO: this function could be in some utils/helper file
function get_folders_of_commited_files {
    (for file in $(git diff --name-only HEAD HEAD~1); do
        folder=$(dirname "${file}")
        [[ ! -f "${folder}/problem.md" ]] && continue
        [[ -f "${folder}/schema.sql" ]] && continue
        [[ -f "${folder}/WRONG" ]] && continue
        echo "${folder}"
    done) | sort | uniq
}

should_update_easiest_problems_cache_file=0
for file in .cache/scripts/get-easiest-problems.sh-*; do
    if [[ -e ${file} ]]; then
        should_update_easiest_problems_cache_file=1
        break
    fi
done

should_update_count_solutions_cache_file=0
for file in .cache/scripts/count-solutions.sh-*; do
    if [[ -e ${file} ]]; then
        should_update_count_solutions_cache_file=1
        break
    fi
done

if [[ ! -e ${file}${tree_hash} ]]; then
    # cache is up to date
    should_update_count_solutions_cache_file=0
fi

if [[ ${should_update_easiest_problems_cache_file} -eq 0 ]] && [[ ${should_update_count_solutions_cache_file} -eq 0 ]]; then
    # we have no cache file yet
    exit 0
fi

if [[ ${should_update_easiest_problems_cache_file} -eq 1 ]]; then
    cp .cache/scripts/get-easiest-problems.sh-* .cache/scripts/OLD-get-easiest-problems.sh
fi

if [[ ${should_update_count_solutions_cache_file} -eq 1 ]]; then
    cp .cache/scripts/count-solutions.sh-* .cache/scripts/OLD-count-solutions.sh
fi

folders=$(get_folders_of_commited_files)

for folder in ${folders}; do
    folder="$(sed 's/\/*$//g' <<<"${folder}")"
    folder="${folder}/"
    solutions="$(get_solutions_in_all_supported_languages "${folder}")"
    solutions_count=$(wc -w <<<"${solutions}")
    missing_languages=$(get_missing_solutions_languages "${folder}")

    if [[ ${should_update_easiest_problems_cache_file} -eq 1 ]] && grep "${folder}" .cache/scripts/get-easiest-problems.sh-*; then
        #shellcheck disable=SC2086
        concatenated_solutions=$(cat ${solutions})
        line_count=$(wc -l <<<"${concatenated_solutions}" | sed 's/ //g')
        sed -i '' -e "s#.*${folder}.*#${line_count} ${folder} (missing: ${missing_languages% })#" .cache/scripts/OLD-get-easiest-problems.sh
    fi

    if [[ ${should_update_count_solutions_cache_file} -eq 1 ]] && grep "${folder}" .cache/scripts/count-solutions.sh-*; then
        sed -i '' -e "s#.*${folder}.*#${solutions_count} ${folder} (missing: ${missing_languages% })#" .cache/scripts/OLD-count-solutions.sh
    fi
done

if [[ ${should_update_easiest_problems_cache_file} -eq 1 ]]; then
    rm .cache/scripts/get-easiest-problems.sh-*
    sort -n <.cache/scripts/OLD-get-easiest-problems.sh >".cache/scripts/get-easiest-problems.sh-${commit_hash}"
    rm .cache/scripts/OLD-get-easiest-problems.sh
fi

if [[ ${should_update_count_solutions_cache_file} -eq 1 ]]; then
    rm .cache/scripts/count-solutions.sh-*
    sort -n <.cache/scripts/OLD-count-solutions.sh >".cache/scripts/count-solutions.sh-${tree_hash}"
    rm .cache/scripts/OLD-count-solutions.sh
fi
