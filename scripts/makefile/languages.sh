#!/usr/bin/env bash

set -euo pipefail

pushd "$(git rev-parse --show-toplevel)" > /dev/null

SUPPORTED_LANGUAGES=$(find .docker -name "*.Dockerfile" 2>/dev/null | sed 's|.*/||' | sed 's|\.Dockerfile$||' | grep -v 'sql-docker-compose' | grep -v lint | grep -v sql | tr '\n' '|' | sed 's/|$//')

FOLDERS=$(find . -name 'problem.md' | sed 's/problem.md//g' | sort)

for folder in ${FOLDERS}; do
    find_cmd="find \"${folder}\""
    for ext in $(echo "$SUPPORTED_LANGUAGES" | tr '|' ' '); do
        find_cmd="${find_cmd} -name '*.${ext}' -o"
    done
    find_cmd="${find_cmd% -o}"

    solutions=$(eval "$find_cmd")
    echo "$(echo "${solutions}" | wc -w | sed 's/ //g') ${folder}"
done | sort -nr

popd  > /dev/null
