#!/usr/bin/env bash

set -euo pipefail

LANGUAGE_EXTENSION=$1

cd $(pwd) || exit 1

function py_check {
    [ "$(find . -name '*.py' | wc -l)" -eq 1 ]
    return $?
}

function py_pre_run {
    :
}

function py_run {
    echo "python *.py"
}

function py_pos_run {
    :
}

function multiple_input_file {
    [ -f in-1.txt ]
    return $?
}

function single_input_file {
    [ -f in.txt ]
    return $?
}

function main {
    if [ "$(find . -name "*.${LANGUAGE_EXTENSION}" | wc -l)" -eq 1 ]; then
        ${LANGUAGE_EXTENSION}_pre_run
        if multiple_input_file; then
            :
        elif single_input_file; then
            $(${LANGUAGE_EXTENSION}_run) < in.txt > "result-${LANGUAGE_EXTENSION}.txt"
        else
            $(${LANGUAGE_EXTENSION}_run) > "result-${LANGUAGE_EXTENSION}.txt"
        fi
        ${LANGUAGE_EXTENSION}_pos_run
    fi
}

main
