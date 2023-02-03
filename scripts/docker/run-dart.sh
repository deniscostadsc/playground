#!/usr/bin/env bash

set -euo pipefail

echo
echo "DART"
echo

for folder in $FOLDERS; do
    [ -f "${folder}WRONG" ] && continue

    if [ "$(find $folder -name '*.dart' | wc -l)" -eq 1 ]; then
        echo "$folder" 
        cd "$folder" || exit 1

        if [ -f in.txt ]; then
            dart *.dart < in.txt > result-dart.txt
        else
            dart *.dart > result-dart.txt
        fi

        diff result-dart.txt out.txt

        cd - > /dev/null
    fi
done
