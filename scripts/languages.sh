#!/usr/bin/env bash

set -euo pipefail

pushd "$(dirname "$0")/.." > /dev/null

FOLDERS=$(find . -name 'problem.txt' | sed 's/problem.txt//g' | sort)

for folder in $FOLDERS; do
    solutions="$(\
        find -E "$folder" -regex '.*(c|clj|cpp|cs|dart|go|hs|java|js|kt|lua|ml|pas|php|py|r|rb|rs|scala|sql)' |\
        grep -Ev 'drop-table.sql|schema.sql')"
    echo "$(echo "$solutions" | wc -w) $folder"
done | sort -nr

popd  > /dev/null
