#!/usr/bin/env bash

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
                --exit-code-from database-client
        else
            docker start -a "${language}-container" 2> /dev/null || $DOCKER_RUN_PREFIX --name "${language}-container" -e PROBLEM="$folder" "$language"
        fi
    done

    scripts/diff.sh "$folder" "$LANGUAGES"
done
