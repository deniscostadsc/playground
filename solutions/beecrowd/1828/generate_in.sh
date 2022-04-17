#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=25

echo $TEST_CASES

for sheldons in pedra papel tesoura lagarto Spock; do
    for rajs in pedra papel tesoura lagarto Spock; do
        echo "$sheldons $rajs"
    done
done
