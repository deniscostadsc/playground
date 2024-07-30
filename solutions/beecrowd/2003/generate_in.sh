#!/usr/bin/env bash

set -euo pipefail

HOUR_START=5
HOUR_END=8
MINUTE_START=0
MINUTE_END=59

for hour in $(seq "${HOUR_START}" "${HOUR_END}"); do
    for minute in $(seq -f "%02g" "${MINUTE_START}" "${MINUTE_END}"); do
        echo "${hour}:${minute}"
    done
done
echo "9:00"
