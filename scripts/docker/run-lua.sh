#!/usr/bin/env bash

set -euo pipefail

echo
echo "LUA"
echo

for folder in ${FOLDERS}; do
    [[ -f "${folder}WRONG" ]] && continue

    if [[ "$(find "${folder}" -name '*.lua' | wc -l)" -eq 1 ]]; then
        echo "${folder}"
        cd "${folder}" || exit 1

        if [[ -f in.txt ]]; then
            lua ./*.lua < in.txt > result-lua.txt
        else
            lua ./*.lua > result-lua.txt
        fi

        diff result-lua.txt out.txt

        cd - > /dev/null
    fi
done
