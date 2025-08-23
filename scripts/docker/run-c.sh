#!/usr/bin/env bash

set -euo pipefail

echo
echo "C"
echo

for folder in ${FOLDERS}; do
    [[ -f "${folder}WRONG" ]] && continue

    if [[ "$(find "${folder}" -name '*.c' | wc -l)" -eq 1 ]]; then
        echo "${folder}"
        cd "${folder}" || exit 1

        gcc -Werror -std=c99 -O2 -lm ./*.c

        if [[ -f in.txt ]]; then
            ./a.out <in.txt >result-c.txt
        else
            ./a.out >result-c.txt
        fi

        rm -rf a.out

        diff result-c.txt out.txt

        cd - >/dev/null
    fi
done
