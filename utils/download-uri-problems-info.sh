#!/usr/bin/env bash

for page_number in $(seq 1 78); do
    if [[ ! -f problems-${page_number}.html ]]; then
        curl -so problems-${page_number}.html "https://www.urionlinejudge.com.br/judge/en/problems/all?page=${page_number}&sort=Problems.solved&direction=desc" \
            -H 'User-Agent: Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:67.0) Gecko/20100101 Firefox/67.0' \
            -H 'Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8' \
            -H 'Accept-Language: en-US,en;q=0.5' \
            --compressed \
            -H 'DNT: 1' \
            -H 'Connection: keep-alive' \
            -H 'Referer: https://www.urionlinejudge.com.br/judge/en/problems/all?page=12&sort=Problems.solved&direction=desc'
        if [[ $? -eq 0 ]]; then
            echo "downloaded problems-${page_number}.html"
        else
            echo "error on problems-${page_number}.html"
        fi
    fi
done
