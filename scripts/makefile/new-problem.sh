#!/usr/bin/env bash

set -euo pipefail

# shellcheck disable=SC1091
source "$(dirname "$0")/../utils/environments.sh"

FOLDER=${1}
LANGUAGE=${2}

# make sure we have one, and only one, trailing slash
FOLDER="$(sed 's/\/*$//g' <<<"${FOLDER}")"
FOLDER="${FOLDER}/"

mkdir -p "${FOLDER}"
touch "${FOLDER}"/{out.txt,problem.md,tags.txt}

if [[ ${LANGUAGE} == 'sql' ]]; then
    touch "${FOLDER}"/{schema.sql,drop-table.sql}
else
    if [[ -f templates/template.${LANGUAGE} ]]; then
        cp "templates/template.${LANGUAGE}" "${FOLDER}$(basename "${FOLDER}").${LANGUAGE}"
    else
        touch "${FOLDER}$(basename "${FOLDER}").${LANGUAGE}"
    fi
    touch "${FOLDER}/in.txt"
fi
