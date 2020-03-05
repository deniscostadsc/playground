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

    response_html=$(mktemp)

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
        --data 'form_id=udebug_custom_problem_view_input_output_form' > "$response_html"

    hxextract textarea "$response_html" 2> /dev/null |\
        hxselect 'textarea#edit-output-data' |\
        sed 's/<[^>]*>//g'

    rm "$response_html"
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
    echo "  -i | --input-file <input file>"
    echo "  -m | --multiple-input-files"
    echo "  -l | --split-lines"
    echo "  -h | --help"
    echo
}

split_lines=0
single_input_file=0
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
        -i|--input-file)
            shift
            single_input_file=1
            input_file="$1"
            shift
        ;;
        -m|--multiple-input-files)
            multiple_input_files=1
            shift
        ;;
        -l|--split-lines)
            shift
            split_lines=1
            split_lines_count="$1"
            shift
        ;;
        *)
            echo "$1 is an invalid option."
            exit 1
        ;;
    esac
done

site="${site:-URI}"

if [ "$single_input_file" -eq 1 ] && [ "$multiple_input_files" -eq 1 ]; then
    echo "You can not use -i and -m at the same time! To have more info, run:"
    echo ""
    echo "$(basename "$0") --help"
    exit 1
fi

if [ "$single_input_file" -eq 1 ]; then
    check_file "$input_file"

    if [ "$split_lines" -eq 0 ]; then
        form_token="$(get_form_token "$site" "$problem_id")"
        get_output "$site" "$problem_id" "$(cat "$input_file")" "$form_token"
    else
        while read -r line; do
            for _ in $(seq 1 $((split_lines_count - 1))); do
                read -r next_line
                line="$(echo -e "${line}\n${next_line}")"
            done
            form_token="$(get_form_token "$site" "$problem_id")"
            get_output "$site" "$problem_id" "$line" "$form_token"
        done < "$input_file"
    fi
fi

if [ "$multiple_input_files" -eq 1 ]; then
    for input_file in in-??.txt; do
        output_suffix="$(echo "$input_file" | grep -o '[0-9]\{2\}')"
        form_token="$(get_form_token "$site" "$problem_id")"
        get_output "$site" "$problem_id" "$(cat "$input_file")" "$form_token" > "out-${output_suffix}.txt"
    done
fi
