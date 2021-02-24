#!/bin/bash

set -euo pipefail

FOLDERS=$1
LANGUAGES=$2
DOCKER_RUN_PREFIX=$3

for folder in $FOLDERS; do
    [ -f "${folder}WRONG" ] && continue

    echo "$folder"

    for language in $LANGUAGES; do
        if [ "$(find "$folder" -name "*.$language" | wc -l)" -eq 0 ]; then
            continue
        fi

        $DOCKER_RUN_PREFIX -e PROBLEM="$folder" "$language"
    done

    scripts/diff.sh "$folder"
done
