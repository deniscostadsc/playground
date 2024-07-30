#!/usr/bin/env bash

set -euo pipefail

for i in $(seq 1 46); do
    echo "${i}"
done

for i in $(seq 47 47 10000); do
    echo "${i}"
done
