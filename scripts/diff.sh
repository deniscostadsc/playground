#!/bin/bash

cd "$1" || exit 1

exit_status=0

if [ -f result-cpp.txt ]; then
    diff result-cpp.txt out.txt || exit_status=1
fi

if [ -f result-py.txt ]; then
    diff result-py.txt out.txt || exit_status=1
fi

if [ -f result-js.txt ]; then
    diff result-js.txt out.txt || exit_status=1
fi

if [ -f result-sql.txt ]; then
    diff result-sql.txt out.txt || exit_status=1
fi

exit $exit_status
