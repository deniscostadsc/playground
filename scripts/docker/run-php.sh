#!/usr/bin/env bash

set -euo pipefail

echo
echo "PHP"
echo

for folder in $FOLDERS; do
    [ -f "${folder}WRONG" ] && continue

    if [ "$(find "$folder" -name '*.php' | wc -l)" -eq 1 ]; then
        echo "$folder" 
        cd "$folder" || exit 1

        if [ -f in.txt ]; then
            php ./*.php < in.txt > result-php.txt
        else
            php ./*.php > result-php.txt
        fi

        diff result-php.txt out.txt

        cd - > /dev/null
    fi
done
