#!/usr/bin/env bash

set -euo pipefail

echo
echo "Elixir"
echo

for folder in ${FOLDERS}; do
    [[ -f "${folder}WRONG" ]] && continue

    if [[ "$(find "${folder}" -name '*.exs' | wc -l)" -eq 1 ]]; then
        echo "${folder}"
        cd "${folder}" || exit 1

        if [[ -f in.txt ]]; then
            elixir *.exs < in.txt > result-exs.txt
        else
            elixir *.exs > result-exs.txt
        fi

        diff result-exs.txt out.txt

        cd - > /dev/null
    fi
done
