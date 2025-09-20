#!/usr/bin/env bash

set -euo pipefail

FOLDERS=$(find . -name 'problem.md' | sed 's/problem.md//g' | sort)
EXIT_STATUS=0

for folder_tag in ${FOLDERS}; do
    if [[ ! -s "${folder_tag}tags.txt" ]]; then
        EXIT_STATUS=1
        echo "Missing content for ${folder_tag}tags.txt"
    fi

    if ! grep -q 'beecrowd' <(echo "${folder_tag}"); then
        continue
    fi

    if ! grep -q '^\(beginner\|ad-hoc\|strings\|data structures and libraries\|mathematics\|paradigms\|graph\|computational geometry\|sql\)' "${folder_tag}tags.txt"; then
        EXIT_STATUS=1
        echo "Missing category for ${folder_tag}tags.txt"
    fi
done

exit "${EXIT_STATUS}"
