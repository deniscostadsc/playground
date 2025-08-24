#!/usr/bin/env bash

set -euo pipefail

echo "sql"

if [ "${LINT_FIX:-}" = "1" ]; then
    find . -name '*.sql' -exec sqlformat --indent_width=4 -k upper -o {} {} \;
else
    for file in $(find . -name '*.sql'); do
        sqlformat --indent_width=4 -k upper "$file" > "${file}.formatted" && \
        if ! diff -q "$file" "${file}.formatted" >/dev/null; then
            echo "SQL formatting issues found in $file"
            rm "${file}.formatted"
            exit 1
        fi
        rm "${file}.formatted"
    done
fi
