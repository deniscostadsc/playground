#!/bin/bash

cd $(dirname $0)

for folder in $(ls -F |grep '\/$'); do
    cd $folder
    gcc *.c
    ./a.out < in.txt > out2.txt
    [ -z "$(diff out2.txt out.txt)" ] || echo "Error: $folder"
    rm *.out out2.txt
    cd ..
done