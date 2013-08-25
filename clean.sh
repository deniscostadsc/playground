#!/bin/bash

cd $(dirname $0)

find . -regex '.*\.\(py[co]\|out\)$' -exec rm -rfv {} \;
find . -name 'out2.txt' -exec rm -rfv {} \;