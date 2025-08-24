#!/usr/bin/env bash

set -euo pipefail

FOLDERS=${1}
ENVIRONMENTS=${2}
DOCKER_RUN_PREFIX=${3}

for environment in ${ENVIRONMENTS}; do
    if [[ "${environment}" == "sql" ]]; then
        FOLDERS="${FOLDERS}" \
            USER="$(id -u):$(id -g)" \
            docker compose \
            -f .docker/sql-docker-compose.yml \
            up \
            --build \
            --quiet-pull \
            --abort-on-container-exit \
            --exit-code-from database-client
    elif [[ "${environment}" == "c" ]]; then
        ${DOCKER_RUN_PREFIX} --platform linux/amd64 -e FOLDERS="${FOLDERS}" "${environment}"
    else
        ${DOCKER_RUN_PREFIX} -e FOLDERS="${FOLDERS}" "${environment}"
    fi
done
