#!/usr/bin/env bash

set -euo pipefail

FOLDERS=$(find . -name 'problem.md' | sed 's/problem.md//g' | sort)
EXIT_STATUS=0

for folder_tag in $FOLDERS; do
    [ -s "${folder_tag}tags.txt" ] && continue

    EXIT_STATUS=1
    echo "Missing content for ${folder_tag}tags.txt"
done

exit $EXIT_STATUS
