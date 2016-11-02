#/bin/bash

TEST_CASES=1
MAX_PEOPLE=9
MAX_X=13
MAX_Y=13

echo "$TEST_CASES"

for i in $(seq $TEST_CASES); do
    number_of_people=$(($RANDOM % $MAX_PEOPLE + 1))
    echo $number_of_people

    for j in $(seq $number_of_people); do
        echo "$(($RANDOM % $MAX_X)) $(($RANDOM % $MAX_Y))"
    done
done
