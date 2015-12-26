function new-problem {
    if [ -z $1 ]; then
        echo "You should inform a problem ID."
        return 1
    fi

    dir=$1
    language=${2:-cpp}

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

    function clean {
            find . -regex '.*\.\(py[co]\|out\)$' -delete
            find . -name 'out2.txt' -delete
    }

    function _test {
        test -f out2.txt && echo "$1" && diff out.txt out2.txt && echo ' - OK'
    }

    if [ -f *.c ]; then
        if [ -f 'in.txt' ]; then
            gcc -Wall *.c -lm && ./a.out < in.txt > out2.txt
        else
            gcc -Wall *.c -lm && ./a.out > out2.txt
        fi

        _test 'C code: '
        clean
    fi

    if [ -f *.cpp ]; then
        if [ -f 'in.txt' ]; then
            g++ -Wall *.cpp -lm && ./a.out < in.txt > out2.txt
        else
            g++ -Wall *.cpp -lm && ./a.out > out2.txt
        fi

        _test 'C++ code: '
        clean
    fi

    if [ -f *.py ]; then
        if [ -f 'in.txt' ]; then
            python *.py < in.txt > out2.txt
        else
            python *.py > out2.txt
        fi

        _test 'Python code: '
        clean
    fi

    if [ -f *.js ]; then
        if [ -f 'in.txt' ]; then
            nodejs *.js < in.txt > out2.txt
        else
            nodejs *.js > out2.txt
        fi

        _test 'Javascript code: '
        clean
    fi
}
