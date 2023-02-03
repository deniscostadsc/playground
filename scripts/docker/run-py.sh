#!/usr/bin/env bash

set -euo pipefail

echo
echo "PYTHON"
echo

for folder in $FOLDERS; do
    [ -f "${folder}WRONG" ] && continue

    if [ "$(find $folder -name '*.py' | wc -l)" -eq 1 ]; then
        echo "$folder" 
        cd "$folder" || exit 1  

        if [ -f in.txt ]; then
            python *.py < in.txt > result-py.txt
        else
            python *.py > result-py.txt
        fi

        diff result-py.txt out.txt

        cd - > /dev/null
    fi
done