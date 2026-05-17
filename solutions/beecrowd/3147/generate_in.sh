#!/usr/bin/env bash

set -euo pipefail

MAX_ARMY=4

for h in $(seq "${MAX_ARMY}"); do
    for e in $(seq "${MAX_ARMY}"); do
        for a in $(seq "${MAX_ARMY}"); do
            for o in $(seq "${MAX_ARMY}"); do
                for w in $(seq "${MAX_ARMY}"); do
                    for x in $(seq "${MAX_ARMY}"); do
                        echo "${h} ${e} ${a} ${o} ${w} ${x}"
                    done
                done
            done
        done
    done
done
