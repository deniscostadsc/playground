#!/usr/bin/env bash

set -euo pipefail

if which dart > /dev/null; then
    dart format -o none --set-exit-if-changed . > /dev/null
else
    true
fi
