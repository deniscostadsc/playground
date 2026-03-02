#!/usr/bin/env bash

set -euo pipefail

FOLDERS=${1}
ENVIRONMENTS=${2}
DOCKER_RUN_PREFIX=${3}
DOCKER_PATH="${DOCKER_PATH:-.docker}"

for environment in ${ENVIRONMENTS}; do
    if [[ -f ${DOCKER_PATH}/${environment}.env ]]; then
        env_file="--env-file ${DOCKER_PATH}/${environment}.env"
    else
        env_file=
    fi
    if [[ "${environment}" == "sql" ]]; then
        FOLDERS="${FOLDERS}" \
        DOCKER_PATH="${DOCKER_PATH}" \
            USER="$(id -u):$(id -g)" \
            docker compose \
            -f "${DOCKER_PATH}/sql-docker-compose.yml" \
            up \
            --build \
            --quiet-pull \
            --abort-on-container-exit \
            --exit-code-from database-client
    elif [[ "${environment}" == "c" ]]; then
        # disable quote warning because we want $env_file to split
        # shellcheck disable=SC2086
        ${DOCKER_RUN_PREFIX} --platform linux/amd64 -e FOLDERS="${FOLDERS}" ${env_file} "${environment}"
    else
        # disable quote warning because we want $env_file to split
        # shellcheck disable=SC2086
        ${DOCKER_RUN_PREFIX} -e FOLDERS="${FOLDERS}" ${env_file} "${environment}"
    fi
done
