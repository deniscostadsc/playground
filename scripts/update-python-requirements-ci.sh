#!/usr/bin/env bash

set -euo pipefail

pip-compile \
    --upgrade \
    --build-isolation \
    --generate-hashes \
    --cache-dir ./.cache \
    --output-file .docker/lint/py-requirements.lock .docker/lint/py-requirements.txt
