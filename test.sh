#!/bin/bash

# set -xv

cd $(dirname $0)

clean (){
    # cleaning by extension
    find . -regex '.*\.\(py[co]\|out\)' -delete

    # cleaning results
    find . -name 'out2.txt' -delete
}

clean

exit=0

for project_folder in $(ls -F | grep '\/$'); do
    if [ $project_folder != "projecteuler/" ]; then
        cd $project_folder
        for folder in $(ls -F | grep '\/$'); do
            cd $folder
            gcc *.c
            ./a.out < in.txt > out2.txt
            if [ ! -z "$(diff out2.txt out.txt)" ]; then
                echo "Error: $project_folder/$folder"
                exit=1
            fi
            cd ..
        done
        cd ..
    fi
done

clean

exit $exit