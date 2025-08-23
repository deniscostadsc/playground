#!/usr/bin/env bash

set -euo pipefail

echo
echo "C++"
echo

for folder in ${FOLDERS}; do
    [[ -f "${folder}WRONG" ]] && continue
    if [[ "$(find "${folder}" -name '*.cpp' | wc -l)" -eq 1 ]]; then
        echo "${folder}"
        cd "${folder}" || exit 1

        g++ -Werror -std=c++20 -O2 -lm ./*.cpp

        if [[ -f in.txt ]]; then
            ./a.out <in.txt >result-cpp.txt
        else
            ./a.out >result-cpp.txt
        fi

        rm -rf a.out

        diff result-cpp.txt out.txt

        cd - >/dev/null
    fi
done
