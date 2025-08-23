#!/usr/bin/env bash

set -euo pipefail

FOLDERS=$(find solutions/beecrowd -name 'problem.md' | sed 's/problem.md//g' | sort)

for folder in ${FOLDERS}; do
    [[ -f "${folder}schema.sql" ]] && continue
    [[ -f "${folder}WRONG" ]] && continue

    supported_languages_dockerfiles=$(ls .docker/*.Dockerfile)
    supported_languages_count=$(wc -w <<<"${supported_languages_dockerfiles}")
    supported_programming_languages_count=$((supported_languages_count - 1)) # - 1 to remove sql

    solutions="$(
        find "${folder}" \
            -name '*.c' -o \
            -name '*.clj' -o \
            -name '*.cpp' -o \
            -name '*.cs' -o \
            -name '*.dart' -o \
            -name '*.exs' -o \
            -name '*.go' -o \
            -name '*.hs' -o \
            -name '*.java' -o \
            -name '*.jl' -o \
            -name '*.js' -o \
            -name '*.kt' -o \
            -name '*.lua' -o \
            -name '*.ml' -o \
            -name '*.pas' -o \
            -name '*.php' -o \
            -name '*.py' -o \
            -name '*.r' -o \
            -name '*.rb' -o \
            -name '*.rs' -o \
            -name '*.scala' -o \
            -name '*.ts'
    )"
    solutions_count=$(wc -w <<<"${solutions}")

    if [[ ${supported_programming_languages_count} -eq ${solutions_count} ]]; then
        # exclude problems with solution in all languages
        continue
    fi

    #shellcheck disable=SC2086
    concated_solutions=$(cat ${solutions})
    line_count=$(wc -l <<<"${concated_solutions}" | sed 's/ //g')
    echo "${line_count} ${folder}"
done | sort -n
