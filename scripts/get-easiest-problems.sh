#!/usr/bin/env bash

#
# TODO: in the future, we'll need to remove folder that already have solution
# with all supported lanbguages.
#

set -euo pipefail

FOLDERS=$(find solutions/beecrowd -name 'problem.md' | sed 's/problem.md//g' | sort)

for folder in ${FOLDERS}; do
    [[ -f "${folder}schema.sql" ]] && continue
    [[ -f "${folder}WRONG" ]] && continue

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
    #shellcheck disable=SC2086
    concated_solutions=$(cat ${solutions})
    line_count=$(wc -l <<< "${concated_solutions}" )
    echo "${line_count} ${folder}"
done | sort -n
