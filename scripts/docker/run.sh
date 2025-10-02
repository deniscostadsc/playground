#!/usr/bin/env bash

set -euo pipefail

: "${BINARY_FILE:=}"
: "${CLEAN_CMD:=}"
: "${COMPILE_CMD:=}"
: "${ENVIRONMENT:=}"
: "${EXTENSION:=}"
: "${FOLDERS:=}"
: "${RUN_CMD:=}"

echo
echo "${ENVIRONMENT}"
echo

for folder in ${FOLDERS}; do
    [[ -f "${folder}WRONG" ]] && continue

    if [[ "$(find "${folder}" -name "*.${EXTENSION}" | wc -l)" -eq 1 ]]; then
        echo "${folder}"
        cd "${folder}" || exit 1

        if [[ -n "${COMPILE_CMD}" ]]; then
            eval "${COMPILE_CMD} *.${EXTENSION}"
        fi

        if [[ -f in.txt ]]; then
            eval "${RUN_CMD}" <in.txt >"result-${EXTENSION}.txt"
        else
            eval "${RUN_CMD}" >"result-${EXTENSION}.txt"
        fi

        if [[ -n "${CLEAN_CMD}" ]]; then
            eval "${CLEAN_CMD}"
        fi

        diff "result-${EXTENSION}.txt" out.txt

        cd - >/dev/null
    fi
done
