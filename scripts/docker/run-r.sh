#!/usr/bin/env bash

set -euo pipefail

echo
echo "R"
echo

for folder in ${FOLDERS}; do
    [[ -f "${folder}WRONG" ]] && continue

    if [[ "$(find "${folder}" -name '*.r' | wc -l)" -eq 1 ]]; then
        echo "${folder}"
        cd "${folder}" || exit 1

        if [[ -f in.txt ]]; then
            Rscript ./*.r <in.txt >result-r.txt
        else
            Rscript ./*.r >result-r.txt
        fi

        diff result-r.txt out.txt

        cd - >/dev/null
    fi
done
