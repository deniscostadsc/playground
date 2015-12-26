function new-problem {
    if [ -z $1 ]; then
        echo "You should inform a problem ID."
        return 1
    fi

    if [ -z $2 ]; then
        echo "You should inform a language."
        return 1
    fi

    dir=$1
    language=$2

    if [ -d $dir ]; then
        echo "Already there is a folder called $dir."
        return 1
    fi

    mkdir $dir && cd $dir && echo "Created $dir."

    touch in.txt
    touch out.txt
    touch problem.txt
    touch $dir.$language
}

function marathon {

    # function to run tests in programming contest folders

    function clean {
            find . -regex '.*\.\(py[co]\|out\)$' -delete
            find . -name 'out2.txt' -delete
    }

    function _test {
        test -f out2.txt && echo "$1" && diff out.txt out2.txt && echo ' - OK'
    }

    if [ -f 'in.txt' -a -f 'out.txt' ]; then
        if [ -f *.c ]; then
            gcc -Wall *.c -lm && ./a.out < in.txt > out2.txt
            _test 'C code: '
            clean
        fi

        if [ -f *.cpp ]; then
            g++ -Wall *.cpp -lm && ./a.out < in.txt > out2.txt
            _test 'C++ code: '
            clean
        fi

        if [ -f *.py ]; then
            python *.py < in.txt > out2.txt
            _test 'Python code: '
            clean
        fi

        if [ -f *.js ]; then
            nodejs *.js < in.txt > out2.txt
            _test 'Javascript code: '
            clean
        fi

    elif [ -f 'out.txt' ]; then
        if [ -f *.c ]; then
            gcc -Wall *.c -lm && ./a.out > out2.txt
            _test 'C code: '
            clean
        fi

        if [ -f *.cpp ]; then
            g++ -Wall *.cpp -lm && ./a.out > out2.txt
            _test 'C++ code: '
            clean
        fi

        if [ -f *.py ]; then
            python *.py > out2.txt
            _test 'Python code: '
            clean
        fi

        if [ -f *.js ]; then
            nodejs *.js > out2.txt
            _test 'Javascript code: '
            clean
        fi
    fi
}
