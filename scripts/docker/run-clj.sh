#!/usr/bin/env bash

set -euo pipefail

echo
echo "CLOJURE"
echo

for folder in ${FOLDERS}; do
    [[ -f "${folder}WRONG" ]] && continue

    if [[ "$(find "${folder}" -name '*.clj' | wc -l)" -eq 1 ]]; then
        echo "${folder}"
        cd "${folder}" || exit 1

        if [[ -f in.txt ]]; then
            clojure -M ./*.clj < in.txt > result-clj.txt
        else
            clojure -M ./*.clj > result-clj.txt
        fi

        diff result-clj.txt out.txt

        cd - > /dev/null
    fi
done
