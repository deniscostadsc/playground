#!/usr/bin/env bash

set -euo pipefail

echo
echo "Julia"
echo

for folder in ${FOLDERS}; do
    [[ -f "${folder}WRONG" ]] && continue

    if [[ "$(find "${folder}" -name '*.jl' | wc -l)" -eq 1 ]]; then
        echo "${folder}"
        cd "${folder}" || exit 1

        if [[ -f in.txt ]]; then
            julia *.jl < in.txt > result-jl.txt
        else
            julia *.jl > result-jl.txt
        fi

        diff result-jl.txt out.txt

        cd - > /dev/null
    fi
done
