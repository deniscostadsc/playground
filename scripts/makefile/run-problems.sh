#!/usr/bin/env bash

set -euo pipefail

FOLDERS=${1}
ENVIRONMENTS=${2}
DOCKER_RUN_PREFIX=${3}

for environment in ${ENVIRONMENTS}; do
    if [[ -f .docker/${environment}.env ]]; then
        env_file="--env-file .docker/${environment}.env"
    else
        env_file=
    fi
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
        # shellcheck disable=SC2086
        ${DOCKER_RUN_PREFIX} --platform linux/amd64 -e FOLDERS="${FOLDERS}" ${env_file} "${environment}"
    else
        # shellcheck disable=SC2086
        ${DOCKER_RUN_PREFIX} -e FOLDERS="${FOLDERS}" ${env_file} "${environment}"
    fi
done
