#!/usr/bin/env bash

set -euo pipefail

echo
echo "RUST"
echo

for folder in ${FOLDERS}; do
    [[ -f "${folder}WRONG" ]] && continue

    if [[ "$(find "${folder}" -name '*.rs' | wc -l)" -eq 1 ]]; then
        echo "${folder}"
        cd "${folder}" || exit 1

        rustc -o main ./*.rs

        if [[ -f in.txt ]]; then
            ./main < in.txt > result-rs.txt
        else
            ./main > result-rs.txt
        fi

        rm -rf main

        diff result-rs.txt out.txt

        cd - > /dev/null
    fi
done
