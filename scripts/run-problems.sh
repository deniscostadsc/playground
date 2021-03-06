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

        if [ "$language" == "sql" ]; then
            PROBLEM="$folder" \
            USER="$(id -u):$(id -g)" \
                docker-compose \
                    -f .docker/sql-docker-compose.yml \
                    --log-level ERROR \
                    up \
                    --build \
                    --quiet-pull \
                    --abort-on-container-exit \
                    --exit-code-from database-client > /dev/null
        else
            $DOCKER_RUN_PREFIX -e PROBLEM="$folder" "$language"
        fi
    done



    scripts/diff.sh "$folder" "$LANGUAGES"
done
