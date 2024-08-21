#!/usr/bin/env bash

set -euo pipefail

FOLDERS=${1}
LANGUAGES=${2}
DOCKER_RUN_PREFIX=${3}

for language in ${LANGUAGES}; do
    if [[ "${language}" == "sql" ]]; then
        FOLDERS="${FOLDERS}" \
        USER="$(id -u):$(id -g)" \
        docker compose \
            -f .docker/sql-docker-compose.yml \
            up \
            --build \
            --quiet-pull \
            --abort-on-container-exit \
            --exit-code-from database-client
    else
        ${DOCKER_RUN_PREFIX} -e FOLDERS="${FOLDERS}" "${language}"
    fi
done
