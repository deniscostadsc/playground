#!/usr/bin/env bash

set -euo pipefail

FOLDERS=$1
LANGUAGES=$2
DOCKER_RUN_PREFIX=$3

for language in $LANGUAGES; do
    if [ "$language" == "sql" ]; then
        :
        # TODO: ensure to pass variables to container using docker-compose
        #FOLDERS="$FOLDERS" \
        #USER="$(id -u):$(id -g)" \
        #docker-compose \
        #    -f .docker/sql-docker-compose.yml \
        #    --log-level ERROR \
        #    up \
        #    --build \
        #    --quiet-pull \
        #    --abort-on-container-exit \
        #    --exit-code-from database-client
    else
        $DOCKER_RUN_PREFIX -e FOLDERS="$FOLDERS" "$language"

        # TODO: avoid creating many containers that works when something fails within the container
        #$DOCKER_RUN_PREFIX --name "${language}-container" -e FOLDERS="$FOLDERS" "$language"
        #docker rm $(docker stop $(docker ps -a -q --filter="name=${language}-container" --format="{{.ID}}")) > /dev/null
    fi
done
