#!/usr/bin/env bash

set -euo pipefail

for x in $(seq 1 64); do
    for y in $(seq 1 64); do
        x_order_start=${x}
        if [[ x -ge 2 ]]; then
            x_order_start=$((x - 1))
        fi
        y_order_start=${y}
        if [[ y -ge 2 ]]; then
            y_order_start=$((y - 1))
        fi
        x_order_end=${x}
        if [[ x -le 63 ]]; then
            x_order_end=$((x + 1))
        fi
        y_order_end=${y}
        if [[ y -le 63 ]]; then
            y_order_end=$((y + 1))
        fi

        echo "${x} ${y} $(((x_order_end - x_order_start + 1) * (y_order_end - y_order_start + 1)))"

        for x_order in $(seq "${x_order_start}" "${x_order_end}"); do
            for y_order in $(seq "${y_order_start}" "${y_order_end}"); do
                echo "${x_order} ${y_order}"
            done
        done
    done
done
