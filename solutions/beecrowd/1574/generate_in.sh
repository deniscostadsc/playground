#!/usr/bin/env bash

# set -vx

TESTCASES=20
COMMANDS_QUANTITY_INCREASE_STEP=5

commands_quantity=5

echo "$((TESTCASES + 2))"  # I want some hardcoded test cases

echo "1"
echo "LEFT"
echo "1"
echo "RIGHT"

for _ in $(seq $TESTCASES); do
    echo $commands_quantity

    for i in $(seq 1 $commands_quantity); do
        command_choice=$((RANDOM % 3));
        if [ "$i" -eq 1 ] && [ "$command_choice" -eq 2 ]; then
            command_choice=$((RANDOM % 2));
        fi

        case $command_choice in
            0)
                echo "RIGHT"
            ;;
            1)
                echo "LEFT"
            ;;
            2)
                previous_index=$(((RANDOM % (i - 1)) + 1))
                echo "SAME AS $previous_index"
            ;;
        esac
    done

    commands_quantity=$((commands_quantity + COMMANDS_QUANTITY_INCREASE_STEP))
done
