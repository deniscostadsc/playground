#!/usr/bin/env bash

set -euo pipefail

CHANGED_FILES="${1}"

FOLDERS="$(echo "${CHANGED_FILES}" | xargs dirname | uniq)"

EXIT_STATUS=0

for folder in ${FOLDERS}; do
    [[ -f "${folder}/WRONG" ]] || continue
    [[ -s "${folder}/WRONG" ]] && continue

    EXIT_STATUS=1
    echo "Missing content for ${folder}/WRONG"
done

exit "${EXIT_STATUS}"
