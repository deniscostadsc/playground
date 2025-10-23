#!/usr/bin/env bash

set -euo pipefail

# shellcheck disable=SC1091
source "$(dirname "$0")/../utils/environments.sh"

FOLDER=${1}
ENVIRONMENTS=${2}

# Trim spaces and validate
ENVIRONMENTS=$(echo "${ENVIRONMENTS}" | xargs)

if [[ "${ENVIRONMENTS}" == *"sql"* ]] && [[ "${ENVIRONMENTS}" != "sql" ]]; then
    echo "Error: SQL cannot be mixed with other languages." >&2
    echo "Please specify only SQL or other languages, but not both." >&2

    exit 1
fi

# make sure we have one, and only one, trailing slash
FOLDER="$(sed 's/\/*$//g' <<<"${FOLDER}")"
FOLDER="${FOLDER}/"

mkdir -p "${FOLDER}"
touch "${FOLDER}"/{out.txt,problem.md,tags.txt}

for environment in ${ENVIRONMENTS}; do
    if [[ ${environment} == 'sql' ]]; then
        touch "${FOLDER}"{schema.sql,drop-table.sql}
        touch "${FOLDER}$(basename "${FOLDER}").sql"
    else
        if [[ -f templates/template.${environment} ]]; then
            cp "templates/template.${environment}" "${FOLDER}$(basename "${FOLDER}").${environment}"
        else
            touch "${FOLDER}$(basename "${FOLDER}").${environment}"
        fi
        touch "${FOLDER}in.txt"
    fi
done
