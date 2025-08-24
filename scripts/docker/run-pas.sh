#!/usr/bin/env bash

set -euo pipefail

echo
echo "PASCAL"
echo

for folder in ${FOLDERS}; do
    [[ -f "${folder}WRONG" ]] && continue

    if [[ "$(find "${folder}" -name '*.pas' | wc -l)" -eq 1 ]]; then
        echo "${folder}"
        cd "${folder}" || exit 1

        fpc -opas.out -l- -v0 ./*.pas

        if [[ -f in.txt ]]; then
            ./pas.out <in.txt >result-pas.txt
        else
            ./pas.out >result-pas.txt
        fi

        rm -rf ./*.o pas.out

        diff result-pas.txt out.txt

        cd - >/dev/null
    fi
done
