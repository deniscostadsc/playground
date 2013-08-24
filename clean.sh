#!/bin/bash

find . -regex '.*\.\(py[co]\|out\)$' -exec rm -rfv {} \;
find . -name 'out2.txt' -exec rm -rfv {} \;