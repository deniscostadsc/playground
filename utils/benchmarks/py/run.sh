#!/usr/bin/env bash

set -euo pipefail

pushd "$(dirname "${0}")" >/dev/null

time python test_print_input.py <../in.txt >test_print_input.txt
time python test_sys.py <../in.txt >test_sys.txt

rm -rf test_print_input.txt test_sys.txt

popd >/dev/null
