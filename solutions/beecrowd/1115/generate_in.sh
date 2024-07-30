#!/usr/bin/env bash

set -euo pipefail

for x in $(seq -10 10); do
    for y in $(seq -10 10); do
        if [[ "${x}" -eq 0 ]] || [[ "${y}" -eq 0 ]]; then
            continue
        fi

        echo "${x} ${y}"
    done
done

echo "0 0"
