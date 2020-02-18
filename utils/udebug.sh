#!/usr/bin/env bash

set -euo pipefail

function get_form_token {
    site=$1
    problem=$2

    curl -s "https://www.udebug.com/$site/$problem" | \
        grep -o "form-[a-zA-Z0-9_-]\{43\}" | \
        sed '1d'
}

function get_output {
    site="$1"
    problem="$2"
    input="$3"
    form_token="$4"

    curl -s "https://www.udebug.com/$site/$problem" \
        -H 'User-Agent: Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:72.0) Gecko/20100101 Firefox/72.0' \
        -H 'Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8' \
        -H 'Accept-Language: en-US,en;q=0.5' \
        --compressed \
        -H 'Content-Type: application/x-www-form-urlencoded' \
        -H 'Origin: https://www.udebug.com' \
        -H 'DNT: 1' \
        -H 'Connection: keep-alive' \
        -H "Referer: https://www.udebug.com/$site/$problem" \
        -H 'Cookie: has_js=1' \
        -H 'Upgrade-Insecure-Requests: 1' \
        --data 'problem_nid=818685' \
        --data-urlencode "input_data=$input" \
        --data 'node_nid=' \
        --data 'op=Get+Accepted+Output' \
        --data 'output_data=' \
        --data 'user_output=' \
        --data "form_build_id=$form_token" \
        --data 'form_id=udebug_custom_problem_view_input_output_form' > udebug-temp.html

    hxextract textarea udebug-temp.html 2> /dev/null |\
        hxselect 'textarea#edit-output-data' |\
        sed 's/<[^>]*>//g'
}

function check_file {
    file="$1"

    if [ ! -f "$file" ]; then
        echo "file $1 does no exist"
        exit 1
    fi
}

function help () {
    echo "usage: $(basename "$0") <options>"
    echo
    echo "  -s | --site <programming contest site>"
    echo "  -p | --problem <problem code>"
    echo "  -i | --input <input file>"
    echo "  -l | --split-lines"
    echo "  -h | --help"
    echo
}

split_lines=0
while [ $# -gt 0 ]; do
    case $1 in
        -h|--help)
            help
            exit 0
        ;;
        -p|--problem)
            shift
            problem_id="$1"
            shift
        ;;
        -s|--site)
            shift
            site="$1"
            shift
        ;;
        -i|--input)
            shift
            input_file="$1"
            shift
        ;;
        -l|--split-lines)
            split_lines=1
            shift
        ;;
        *)
            echo "$1 is an invalid option."
            exit 1
        ;;
    esac
done

check_file "$input_file"

if [ $split_lines -eq 0 ]; then
    form_token="$(get_form_token "${site:-URI}" "$problem_id")"
    get_output "${site:-URI}" "$problem_id" "$(cat "$input_file")" "$form_token"
else
    while read -r line; do
        form_token="$(get_form_token "${site:-URI}" "$problem_id")"
        get_output "${site:-URI}" "$problem_id" "$line" "$form_token"
    done < "$input_file"
fi

rm udebug-temp.html
