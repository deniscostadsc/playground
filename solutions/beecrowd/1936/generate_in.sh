#!/usr/bin/env bash

set -euo pipefail

LIMIT=1000000

number=1
while [[ ${number} -lt ${LIMIT} ]]; do
    echo "${number}"
    number=$((number + (RANDOM % 20000)))
done
