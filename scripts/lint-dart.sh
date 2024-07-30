#!/usr/bin/env bash

set -euo pipefail

if command -v dart > /dev/null; then
    dart format -o none --set-exit-if-changed . > /dev/null
else
    true
fi
