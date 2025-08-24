#!/usr/bin/env bash

set -euo pipefail

# shellcheck disable=SC1091
source "$(dirname "$0")/../utils/environments.sh"

pushd "$(git rev-parse --show-toplevel)" >/dev/null

SUPPORTED_ENVIRONMENTS=$(get_supported_languages | tr ' ' '|' | sed 's/|$//')

FOLDERS=$(find . -name 'problem.md' | sed 's/problem.md//g' | sort)

for folder in ${FOLDERS}; do
    find_cmd="find \"${folder}\""
    for ext in $(echo "$SUPPORTED_ENVIRONMENTS" | tr '|' ' '); do
        find_cmd="${find_cmd} -name '*.${ext}' -o"
    done
    find_cmd="${find_cmd% -o}"

    solutions=$(eval "$find_cmd")
    echo "$(echo "${solutions}" | wc -w | sed 's/ //g') ${folder}"
done | sort -nr

popd >/dev/null
