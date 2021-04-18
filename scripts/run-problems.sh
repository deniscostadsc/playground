#!/bin/bash

set -euo pipefail
set -vx

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

    if [ "$(find "$folder" -name "*.sql" | wc -l)" -ge 1 ]; then
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
    fi

    scripts/diff.sh "$folder" "$LANGUAGES"
done
