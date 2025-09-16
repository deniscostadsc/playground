#!/usr/bin/env bash

set -euo pipefail

# shellcheck disable=SC1091
source "$(dirname "$0")/../utils/environments.sh"

FOLDER=${1}
if [[ ! -f "${FOLDER}/problem.md" ]]; then
    echo "This folder is not a solution folder"
    exit 1
fi

missing_solutions_languages=$(get_missing_solutions_languages "${FOLDER}")

for extension in ${missing_solutions_languages}; do
    touch "${FOLDER}$(basename "${FOLDER}").${extension}"
done
