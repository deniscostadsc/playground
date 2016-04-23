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
        find . -name 'out.temp' -delete
    }

    function _test {
        test -f out.temp && \
            echo "$1" && \
            diff out.txt out.temp && \
            echo ' - OK' && \
            rm WRONG 2> /dev/null

        clean
    }

    echo

    if [ -f *.c ]; then
        if [ -f 'in.txt' ]; then
            gcc -Wall *.c -lm && ./a.out < in.txt > out.temp
        else
            gcc -Wall *.c -lm && ./a.out > out.temp
        fi

        _test 'C code: '
        cpplint --filter="-legal/copyright" *.c
        echo
    fi

    if [ -f *.cpp ]; then
        if [ -f 'in.txt' ]; then
            g++ -Wall *.cpp -lm && ./a.out < in.txt > out.temp
        else
            g++ -Wall *.cpp -lm && ./a.out > out.temp
        fi

        _test 'C++ code: '
        # most of runtime/int are about C++11 things, and I can't use C++11
        cpplint --filter="-legal/copyright,-runtime/int" *.cpp
        echo
    fi

    if [ -f *.py ]; then
        if [ -f 'in.txt' ]; then
            python *.py < in.txt > out.temp
        else
            python *.py > out.temp
        fi

        _test 'Python code: '

        flake8 .
        echo
    fi

    if [ -f *.js ]; then
        if [ -f 'in.txt' ]; then
            node *.js < in.txt > out.temp
        else
            node *.js > out.temp
        fi

        _test 'Javascript code: '
        jshint *.js
        jscs *.js
        echo
    fi

    if [ -f *.go ]; then
        if [ -f 'in.txt' ]; then
            go run *.go < in.txt > out.temp
        else
            go run *.go > out.temp
        fi

        _test 'Golang code: '
        gofmt -w *.go
        echo
    fi
}
