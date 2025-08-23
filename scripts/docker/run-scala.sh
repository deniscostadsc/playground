#!/usr/bin/env bash

set -euo pipefail

echo
echo "SCALA"
echo

for folder in ${FOLDERS}; do
    [[ -f "${folder}WRONG" ]] && continue

    if [[ "$(find "${folder}" -name '*.scala' | wc -l)" -eq 1 ]]; then
        echo "${folder}"
        cd "${folder}" || exit 1

        scalac ./*.scala

        if [[ -f in.txt ]]; then
            scala Main <in.txt >result-scala.txt
        else
            scala Main >result-scala.txt
        fi

        rm -rf Main*.class

        diff result-scala.txt out.txt

        cd - >/dev/null
    fi
done
