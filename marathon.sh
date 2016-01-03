#!/bin/bash

function _can_create_folder {
    not_empty_with_no_folders=1
    correct_level=1

    if [ -n "$(ls -F | grep '/')" ]; then
        cd "$(ls -F | grep '/' | head -1)"
        if [ -n "$(ls -F | grep '/')" ]; then
            correct_level=0
        fi
        cd - > /dev/null
    fi

    if [ -z "$(ls -F | grep '/')" -a -n "$(ls -F | grep -v '/')" ]; then
        not_empty_with_no_folders=0
    fi

    if [ $correct_level == 0 -o $not_empty_with_no_folders == 0 ]; then
        echo
        echo "You probably are trying to create the solution folder in the  wrong place!!!"
        echo
        echo "You are now here $PWD"
        echo
        return 1
    fi

    return 0
}

function new-problem {
    if ! _can_create_folder; then
        return 1
    fi

    if [ -z $1 ]; then
        echo
        echo "You should inform a problem ID."
        echo
        return 1
    fi

    dir=$1
    language=${2:-cpp}

    if [ -d $dir ]; then
        echo
        echo "Already there is a folder called $dir."
        echo
        return 1
    fi

    mkdir $dir && cd $dir && echo "Created $dir."

    touch $dir.$language
    touch in.txt
    touch out.txt
    touch problem.txt
    touch WRONG
}


function marathon {

    function clean {
        find . -regex '.*\.\(py[co]\|out\)$' -delete
        find . -name 'out2.txt' -delete
    }

    function _test {
        test -f out2.txt && \
            echo "$1" && \
            diff out.txt out2.txt && \
            echo ' - OK' && \
            rm WRONG 2> /dev/null

        clean
    }

    if [ -f *.c ]; then
        if [ -f 'in.txt' ]; then
            gcc -Wall *.c -lm && ./a.out < in.txt > out2.txt
        else
            gcc -Wall *.c -lm && ./a.out > out2.txt
        fi

        _test 'C code: '
        cpplint --filter="-legal/copyright,-build/namespaces" *.c
        echo
    fi

    if [ -f *.cpp ]; then
        if [ -f 'in.txt' ]; then
            g++ -Wall *.cpp -lm && ./a.out < in.txt > out2.txt
        else
            g++ -Wall *.cpp -lm && ./a.out > out2.txt
        fi

        _test 'C++ code: '
        cpplint --filter="-legal/copyright,-build/namespaces" *.cpp
        echo
    fi

    if [ -f *.py ]; then
        if [ -f 'in.txt' ]; then
            python *.py < in.txt > out2.txt
        else
            python *.py > out2.txt
        fi

        _test 'Python code: '

        pep8 .
        echo
    fi

    if [ -f *.js ]; then
        if [ -f 'in.txt' ]; then
            node *.js < in.txt > out2.txt
        else
            node *.js > out2.txt
        fi

        _test 'Javascript code: '
        jshint *.js
        jscs *.js
        echo
    fi

    if [ -f *.go ]; then
        if [ -f 'in.txt' ]; then
            go run *.go < in.txt > out2.txt
        else
            go run *.go > out2.txt
        fi

        _test 'Golang code: '
        gofmt -w *.go
        echo
    fi
}