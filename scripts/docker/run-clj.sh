#!/usr/bin/env bash
#
# We use this script for Clojure instead of run.sh because we manually handle
# package caching. Clojure downloads packages every time it runs. We store this
# cache in .clojure/ directory. Before running, we copy this cache to the root
# of the repository and run all Clojure solutions from the root path.
#
# If we cd into each solution folder (like run.sh does), Clojure would not
# use the cache we manually copied and would download all packages N times
# (where N is the number of solutions). This script prevents that by running
# everything from the root with our pre-configured cache.
#

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
