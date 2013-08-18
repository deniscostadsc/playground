#!/bin/bash

cd $(dirname $0)

# cleaning
find . -regex '.*\.\(py[co]\|out\)' -delete

exit=0

for folder in $(ls -F |grep '\/$'); do
    cd $folder
    for folder in $(ls -F |grep '\/$'); do
        cd $folder
        gcc *.c
        ./a.out < in.txt > out2.txt
        if [ ! -z "$(diff out2.txt out.txt)" ]; then
            echo "Error: $folder"
            exit=1
        fi
        rm *.out out2.txt
        cd ..
    done
    cd ..
done

exit $exit