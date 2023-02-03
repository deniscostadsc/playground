#!/usr/bin/env bash

set -euo pipefail

echo
echo "GO"
echo

for folder in $FOLDERS; do
    [ -f "${folder}WRONG" ] && continue

    if [ "$(find $folder -name '*.go' | wc -l)" -eq 1 ]; then
        echo "$folder" 
        cd "$folder" || exit 1

        if [ -f in.txt ]; then
            go run *.go < in.txt > result-go.txt
        else
            go run *.go > result-go.txt
        fi

        diff result-go.txt out.txt

        cd - > /dev/null
    fi
done
