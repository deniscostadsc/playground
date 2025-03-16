#!/usr/bin/env bash

set -euo pipefail

pushd "$(dirname "${0}")/.." > /dev/null

FOLDERS=$(find . -name 'problem.md' | sed 's/problem.md//g' | sort)

for folder in ${FOLDERS}; do
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
            -name '*.sql' -o \
            -name '*.ts' | \
        grep -Ev 'drop-table.sql|schema.sql')"
    echo "$(echo "${solutions}" | wc -w | sed 's/ //g') ${folder}"
done | sort -nr

popd  > /dev/null
