#!/bin/bash

cd "$1" || exit 1

exit_status=0

if [ -f result-c.txt ]; then
    echo "result-c.txt"
    diff result-c.txt out.txt || exit_status=1
fi

if [ -f result-cpp.txt ]; then
    echo "result-cpp.txt"
    diff result-cpp.txt out.txt || exit_status=1
fi

if [ -f result-cs.txt ]; then
    echo "result-cs.txt"
    diff result-cs.txt out.txt || exit_status=1
fi

if [ -f result-py.txt ]; then
    echo "result-py.txt"
    diff result-py.txt out.txt || exit_status=1
fi

if [ -f result-js.txt ]; then
    echo "result-js.txt"
    diff result-js.txt out.txt || exit_status=1
fi

if [ -f result-sql.txt ]; then
    echo "result-sql.txt"
    diff result-sql.txt out.txt || exit_status=1
fi

exit $exit_status
