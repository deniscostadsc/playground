#!/usr/bin/env bash

set -euo pipefail

echo
echo "OCAML"
echo

for folder in ${FOLDERS}; do
    [[ -f "${folder}WRONG" ]] && continue

    rm -rf "${folder}main.ml" 2> /dev/null

    if [[ "$(find "${folder}" -name '*.ml' | wc -l)" -ge 1 ]]; then
        echo "${folder}"
        cd "${folder}" || exit 1

        rm -rf "${folder}main.ml" 2> /dev/null

        cp ./*.ml main.ml
        ocamlc -o ml.out main.ml

        if [[ -f in.txt ]]; then
            ./ml.out < in.txt > result-ml.txt
        else
            ./ml.out > result-ml.txt
        fi

        rm -rf ml.out main.ml main.cmi main.cmo

        diff result-ml.txt out.txt

        cd - > /dev/null
    fi
done
