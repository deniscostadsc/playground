#!/usr/bin/env bash

set -euo pipefail

echo
echo "KOTLIN"
echo

for folder in $FOLDERS; do
    [ -f "${folder}WRONG" ] && continue

    if [ "$(find "$folder" -name '*.kt' | wc -l)" -eq 1 ]; then
        echo "$folder" 
        cd "$folder" || exit 1

        cp ./*.kt main.kt
        /kotlinc/bin/kotlinc main.kt

        if [ -f in.txt ]; then
            /kotlinc/bin/kotlin MainKt < in.txt > result-kt.txt
        else
            /kotlinc/bin/kotlin MainKt > result-kt.txt
        fi

        rm -rf MainKt.class main.kt META-INF

        diff result-kt.txt out.txt

        cd - > /dev/null
    fi
done
