#!/usr/bin/env bash

set -euo pipefail

CACHE_DIR=".cache/scripts"

function get_hash_path {
    local path="$1"
    echo -n "${path}" | sha256sum | cut -d' ' -f1
}

function get_commit_hash {
    cd "$(git rev-parse --show-toplevel)" || exit 0
    git rev-parse HEAD
}

function get_tree_hash {
    (
        cd "$(git rev-parse --show-toplevel)" || exit 0
        tree
    ) | sha256sum | cut -d' ' -f1
}

function is_cache_valid {
    local caller_hash=""
    caller_hash="$(get_hash_path "${1}")"
    local hash="${2}"
    [[ -f "${CACHE_DIR}/${caller_hash}-${hash}" ]]
}

function save_cache {
    local caller_hash=""
    caller_hash="$(get_hash_path "${1}")"
    clean_cache "${caller_hash}"

    local hash="${2}"
    local content="${3}"
    echo "${content}" >"${CACHE_DIR}/${caller_hash}-${hash}"
}

function load_cache {
    local caller_hash=""
    caller_hash="$(get_hash_path "${1}")"
    local hash="$2"
    cat "${CACHE_DIR}/${caller_hash}-${hash}"
}

function clean_cache {
    local caller_hash="${1}"
    find "${CACHE_DIR}" -type f -name "${caller_hash}-*" ! -name '.gitkeep' -exec rm -f {} +
}
