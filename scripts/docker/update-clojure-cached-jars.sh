#!/usr/bin/env bash

set -euo pipefail

clojure -M ./solutions/beecrowd/1000/1000.clj > result-clj.txt
[[ -d .clojure/\? ]] && rm -r .clojure/\?
mv \? .clojure/

