#!/usr/bin/env bash

set -euo pipefail

FOLDERS=$(find solutions/beecrowd -name 'problem.md' | sed 's/problem.md//g' | sort)

for folder in ${FOLDERS}; do
    [[ -f "${folder}schema.sql" ]] && continue
    [[ -f "${folder}WRONG" ]] && continue

    # echo "---> ${folder}"
    solutions="$(\
        find "${folder}" \
            -name '*.c' -o \
            -name '*.clj' -o \
            -name '*.cpp' -o \
            -name '*.cs' -o \
            -name '*.dart' -o \
            -name '*.go' -o \
            -name '*.hs' -o \
            -name '*.java' -o \
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
            -name '*.ts' \
    )"
    echo "$(cat ${solutions} | wc -l) ${folder}"
done | sort -n
