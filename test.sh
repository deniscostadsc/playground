#!/bin/bash

cd $(dirname $0)

# cleaning
find . -regex '.*\.\(py[co]\|out\)' -delete

for folder in $(ls -F |grep '\/$'); do
    cd $folder
    for folder in $(ls -F |grep '\/$'); do
        cd $folder
        gcc *.c
        ./a.out < in.txt > out2.txt
        [ -z "$(diff out2.txt out.txt)" ] || echo "Error: $folder"
        rm *.out out2.txt
        cd ..
    done
    cd ..
done