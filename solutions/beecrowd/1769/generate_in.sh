#!/usr/bin/env bash

set -euo pipefail

TEST_CASES=10000

function print_valid_cpf {
    # https://pt.wikipedia.org/wiki/Cadastro_de_Pessoas_F%C3%ADsicas#C%C3%A1lculo_do_d%C3%ADgito_verificador
    digits=()
    verifier_1=0
    verifier_2=0
    for index in $(seq 0 8); do
        digit=$((RANDOM % 10))
        digits+=("${digit}")
        verifier_1=$((verifier_1 + (digit * (9 - (index % 10)))))
        verifier_2=$((verifier_2 + (digit * (9 - ((index + 1) % 10)))))
    done
    for index in $(seq 8 0); do
        echo -n "${digits[${index}]}"
        if [[ ${index} -eq 6 ]] || [[ ${index} -eq 3 ]]; then
            echo -n "."
        fi
    done

    echo -n "-"

    [[ $((verifier_1 % 11)) -eq 10 ]] && verifier_1=0 || verifier_1=$((verifier_1 % 11))
    echo -n "${verifier_1}"

    verifier_2=$((verifier_2 + (verifier_1 * 9)))
    [[ $((verifier_2 % 11)) -eq 10 ]] && echo "0" || echo "$((verifier_2 % 11))"
}

function print_probably_invalid_cpf {
    for index in $(seq 11); do
        echo -n "$((RANDOM % 10))"
        if [[ ${index} -eq 3 ]] || [[ ${index} -eq 6 ]]; then
            echo -n "."
        fi
        if [[ ${index} -eq 9 ]]; then
            echo -n "-"
        fi
    done
    echo
}

for _ in $(seq "${TEST_CASES}"); do
    if [[ $((RANDOM % 2)) -eq 0 ]]; then
        print_valid_cpf
    else
        print_probably_invalid_cpf
    fi
done
