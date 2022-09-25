#!/usr/bin/env bash

set -euo pipefail

for hour in {00..11}; do
    for minute in {00..59}; do
        echo "${hour}:${minute}"
    done
done
