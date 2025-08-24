#!/usr/bin/env bash

set -euo pipefail

if [ "${LINT_FIX:=0}" -eq 1 ]; then
    phpcbf --standard=PSR12 $(find . -name "*.php") || true
else
    phpcs --standard=PSR12 $(find . -name "*.php")
fi
