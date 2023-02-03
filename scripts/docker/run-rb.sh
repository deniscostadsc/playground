#!/usr/bin/env bash

set -euo pipefail

echo
echo "RUBY"
echo

for folder in $FOLDERS; do
    [ -f "${folder}WRONG" ] && continue

    if [ "$(find "$folder" -name '*.rb' | wc -l)" -eq 1 ]; then
        echo "$folder" 
        cd "$folder" || exit 1

        if [ -f in.txt ]; then
            ruby ./*.rb < in.txt > result-rb.txt
        else
            ruby ./*.rb > result-rb.txt
        fi

        diff result-rb.txt out.txt

        cd - > /dev/null
    fi
done
