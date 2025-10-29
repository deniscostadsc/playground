#!/usr/bin/env bash

set -euo pipefail

# shellcheck disable=SC1091
source "$(dirname "$0")/../utils/environments.sh"

FOLDER=${1}
ENVIRONMENTS=${2}

# make sure we have one, and only one, trailing slash
FOLDER="$(sed 's/\/*$//g' <<<"${FOLDER}")"
FOLDER="${FOLDER}/"

if [[ ! -f "${FOLDER}/problem.md" ]]; then
    echo "This folder is not a solution folder"
    exit 1
fi

if [[ -f "${FOLDER}/schema.sql" ]]; then
    echo "This folder has a sql problem"
    exit 1
fi

missing_solutions_languages=$(get_missing_solutions_languages "${FOLDER}")

for extension in ${missing_solutions_languages}; do
    if [[ ! " ${ENVIRONMENTS} " == *" ${extension} "* ]]; then
        continue
    fi

    if [[ -f templates/template.${extension} ]] && [[ ! -f "${FOLDER}$(basename "${FOLDER}").${extension}" ]]; then
        cp "templates/template.${extension}" "${FOLDER}$(basename "${FOLDER}").${extension}"
    else
        touch "${FOLDER}$(basename "${FOLDER}").${extension}"
    fi
done
