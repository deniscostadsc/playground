#!/usr/bin/env bash

set -euo pipefail

echo
echo "JAVASCRIPT"
echo

for folder in $FOLDERS; do
    [ -f "${folder}WRONG" ] && continue

    if [ "$(find "$folder" -name '*.js' | wc -l)" -eq 1 ]; then
        echo "$folder" 
        cd "$folder" || exit 1

        if [ -f in.txt ]; then
            node ./*.js < in.txt > result-js.txt
        else
            node ./*.js > result-js.txt
        fi

        diff result-js.txt out.txt

        cd - > /dev/null
    fi
done
