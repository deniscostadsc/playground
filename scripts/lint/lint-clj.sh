#!/usr/bin/env bash

set -euo pipefail

EXIT_STATUS=0

while IFS= read -r -d '' file; do
    clj-kondo --lint "${file}" || EXIT_STATUS=1
done < <(find . -name '*.clj' -print0)

exit "${EXIT_STATUS}"
