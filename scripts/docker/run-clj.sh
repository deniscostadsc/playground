#!/usr/bin/env bash

set -euo pipefail

echo
echo "CLOJURE"
echo

cp -R .clojure/\? .

for folder in ${FOLDERS}; do
    [[ -f "${folder}WRONG" ]] && continue

    if [[ "$(find "${folder}" -name '*.clj' | wc -l)" -eq 1 ]]; then
        # make sure we have one, and only one trailing slash
        folder="$(sed 's/\/*$//g' <<<"${folder}")"
        folder="${folder}/"

        echo "${folder}"

        if [[ -f "${folder}in.txt" ]]; then
            clojure -M "${folder}"*.clj <"${folder}in.txt" >"${folder}result-clj.txt"
        else
            clojure -M "${folder}"*.clj >"${folder}result-clj.txt"
        fi

        diff "${folder}result-clj.txt" "${folder}out.txt"
    fi
done
