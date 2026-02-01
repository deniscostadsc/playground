#!/usr/bin/env bash

set -euo pipefail

# shellcheck disable=SC1091
source "$(dirname "$0")/../utils/environments.sh"

FOLDERS=${1}
ENVIRONMENTS=${2}

for folder in ${FOLDERS}; do
    # make sure we have one, and only one, trailing slash
    folder="$(sed 's/\/*$//g' <<<"${folder}")"
    folder="${folder}/"

    if [[ ! -f "${folder}/problem.md" ]]; then
        echo "This folder is not a solution folder"
        exit 1
    fi

    if [[ -f "${folder}/schema.sql" ]]; then
        echo "This folder has a sql problem"
        continue
    fi

    if [[ " ${ENVIRONMENTS} " == *" sh "* ]] && [[ ! -f "${folder}generate_in.sh" ]]; then
        cp "templates/template.sh" "${folder}generate_in.sh"
    fi

    missing_solutions_languages=$(get_missing_solutions_languages "${folder}")
    for extension in ${missing_solutions_languages}; do
        if [[ ! " ${ENVIRONMENTS} " == *" ${extension} "* ]]; then
            continue
        fi

        if [[ -f ${folder}WRONG ]]; then
            continue
        fi

        if [[ "${extension}" == "sh" ]]; then
            cp "templates/template.sh" "${folder}generate_in.sh"
            continue
        fi

        if [[ -f templates/template.${extension} ]] && [[ ! -f "${folder}$(basename "${folder}").${extension}" ]]; then
            cp "templates/template.${extension}" "${folder}$(basename "${folder}").${extension}"
        else
            touch "${folder}$(basename "${folder}").${extension}"
        fi
    done
done
