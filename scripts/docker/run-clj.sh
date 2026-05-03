#!/usr/bin/env bash
#
# Optimized Clojure runner with shared dependency cache. Unlike run.sh (which
# cd's into each solution causing N package downloads), this runs all solutions
# from the repository root using a pre-populated cache at
# .cache/?/.m2/repository/org/clojure to eliminate redundant downloads.
#

set -euo pipefail

echo
echo "Clojure"
echo

cp -R .cache/\? .

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
