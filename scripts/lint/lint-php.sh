#!/usr/bin/env bash

set -euo pipefail

if [[ "${LINT_FIX:=0}" -eq 1 ]]; then
    find . -name "*.php" -print0 | xargs -0 phpcbf --standard=PSR12 || true
else
    find . -name "*.php" -print0 | xargs -0 phpcs --standard=PSR12
fi
