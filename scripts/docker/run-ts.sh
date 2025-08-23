#!/usr/bin/env bash

set -euo pipefail

echo
echo "TYPESCRIPT"
echo

for folder in ${FOLDERS}; do
    [[ -f "${folder}WRONG" ]] && continue

    if [[ "$(find "${folder}" -name '*.ts' | wc -l)" -eq 1 ]]; then
        echo "${folder}"
        cd "${folder}" || exit 1
        tsc ./*.ts --outfile compiledFromTSFile.js

        if [[ -f in.txt ]]; then
            node ./compiledFromTSFile.js <in.txt >result-ts.txt
        else
            node ./compiledFromTSFile.js >result-ts.txt
        fi

        rm compiledFromTSFile.js
        diff result-ts.txt out.txt

        cd - >/dev/null
    fi
done
