#!/bin/bash

# set -xv

cd $(dirname $0)

clean (){
    # cleaning by extension
    find . -regex '.*\.\(py[co]\|out\)' -delete

    # cleaning results
    find . -name 'out2.txt' -delete
}

extension_exists (){
    if [ $(find . -name $1 | wc -l) -gt 0 ]; then
        return 0
    fi
    return 1
}

clean

exit=0

for project_folder in $(ls -F | grep '\/$'); do
    cd $project_folder
    for folder in $(ls -F | grep '\/$'); do
        cd $folder

        # testing c code
        if extension_exists '*.c'; then
            gcc *.c -lm
            if [ $project_folder == "projecteuler/" ]; then
                ./a.out > out2.txt
            else
                ./a.out < in.txt > out2.txt
            fi
            if [ ! -z "$(diff out2.txt out.txt)" ]; then
                echo "C Error: $project_folder$folder"
                exit=1
            fi
        fi

        # testing python code
        if extension_exists '*.py'; then
            if [ $project_folder == "projecteuler/" ]; then
                python *.py > out2.txt
            else
                python *.py < in.txt > out2.txt
            fi

            if [ ! -z "$(diff out2.txt out.txt)" ]; then
                echo "Python Error: $project_folder$folder"
                exit=1
            fi
        fi

        cd ..
    done
    cd ..
done

clean

exit $exit