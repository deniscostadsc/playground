#!/usr/bin/env bash

set -euo pipefail

echo
echo "JAVA"
echo

for folder in $FOLDERS; do
    [ -f "${folder}WRONG" ] && continue

    if [ "$(find "$folder" -name '*.java' | wc -l)" -eq 1 ]; then
        echo "$folder" 
        cd "$folder" || exit 1

        cp ./*.java Main.java
        javac Main.java

        if [ -f in.txt ]; then
            java Main < in.txt > result-java.txt
        else
            java Main > result-java.txt
        fi

        rm -rf Main.java Main.class

        diff result-java.txt out.txt

        cd - > /dev/null
    fi
done
