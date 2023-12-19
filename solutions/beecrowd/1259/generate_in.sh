#!/usr/bin/env bash

set -euo pipefail

RANGE_START=2
RANGE_END=100000

echo $((RANGE_END - RANGE_START + 1))
seq "${RANGE_START}" "${RANGE_END}" | shuf
