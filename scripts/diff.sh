#!/bin/bash

set -euo pipefail

PROBLEM_FOLDER=$1
LANGUAGES=$2
EXIT_STATUS=0

cd "$PROBLEM_FOLDER" || exit 1

for language in $LANGUAGES; do
    if [ -f "result-${language}.txt" ]; then
        echo "result-${language}.txt"
        diff "result-${language}.txt" out.txt || EXIT_STATUS=1
    fi
done

exit $EXIT_STATUS
