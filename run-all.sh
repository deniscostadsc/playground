#!/usr/bin/env bash

set -euo pipefail

if [[ "${1:-1}" == '-fail-on-warnings' ]]; then
    warning_flags='-Werror'
else
    warning_flags='-Wall'
fi

function run_cpp {
    g++ $warning_flags --std=c++11 -O2 ./*.cpp -lm

    if [[ -f in.txt ]]; then
        ./a.out < in.txt > result.txt
    else
        ./a.out > result.txt
    fi

    rm a.out
}

function run_c {
    gcc $warning_flags ./*.c -lm

    if [[ -f in.txt ]]; then
        ./a.out < in.txt > result.txt
    else
        ./a.out > result.txt
    fi

    rm a.out
}

function run_python {
    if [[ -f in.txt ]]; then
        python ./*.py < in.txt > result.txt
    else
        python ./*.py > result.txt
    fi
}

function run_sql {
    export PGPASSWORD=12345678
    export PGDATABASE=uri
    psql -h localhost -U uri < schema.sql > /dev/null
    psql -h localhost -U uri < [0-9]*.sql > result.txt
    psql -h localhost -U uri < drop-table.sql > /dev/null
}

function run_and_check {
    if [[ "$(find . -name '*.cpp' | wc -l)" -eq 1 ]]; then
        run_cpp
        diff out.txt result.txt
    fi

    if [[ "$(find . -name '*.c' | wc -l)" -eq 1 ]]; then
        run_c
        diff out.txt result.txt
    fi

    if [[ "$(find . -name '*.py' | wc -l)" -eq 1 ]]; then
        run_python
        diff out.txt result.txt
    fi

    if [[ "$(find . -name '*.sql' | wc -l)" -gt 0 ]]; then
        run_sql
        diff out.txt result.txt
    fi

    if [[ -f result.txt ]]; then
        rm result.txt
    fi
}

function run_all {
    shopt -s globstar nullglob # needed for ./**

    for file in ./**/problem.txt ; do
        folder="$(dirname "$file")"
        cd "$folder" || exit 1
        echo "$folder"
        if [[ ! -f 'WRONG' ]]; then
            run_and_check
        fi
        cd - > /dev/null || exit 1
    done
}

run_all
