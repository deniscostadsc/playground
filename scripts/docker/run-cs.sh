#!/usr/bin/env bash

set -euo pipefail

echo
echo "C#"
echo

for folder in ${FOLDERS}; do
    [[ -f "${folder}WRONG" ]] && continue

    if [[ "$(find "${folder}" -name '*.cs' | wc -l)" -eq 1 ]]; then
        echo "${folder}"
        cd "${folder}" || exit 1

        mcs -out:a.exe ./*.cs

        if [[ -f in.txt ]]; then
            mono a.exe <in.txt >result-cs.txt
        else
            mono a.exe >result-cs.txt
        fi

        rm -rf a.exe

        diff result-cs.txt out.txt

        cd - >/dev/null
    fi
done
