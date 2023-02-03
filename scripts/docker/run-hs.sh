#!/usr/bin/env bash

set -euo pipefail

echo
echo "HASKELL"
echo

for folder in $FOLDERS; do
    [ -f "${folder}WRONG" ] && continue

    if [ "$(find "$folder" -name '*.hs' | wc -l)" -eq 1 ]; then
        echo "$folder" 
        cd "$folder" || exit 1

        ghc -o hs.out ./*.hs > /dev/null

        if [ -f in.txt ]; then
            ./hs.out < in.txt > result-hs.txt
        else
            ./hs.out > result-hs.txt
        fi

        rm -rf ./*.o ./*.hi hs.out

        diff result-hs.txt out.txt

        cd - > /dev/null
    fi
done
