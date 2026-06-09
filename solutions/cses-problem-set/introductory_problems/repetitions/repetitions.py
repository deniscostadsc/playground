import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    previous_character = line[0]
    current_repeated_sequence = longest_repeated_sequence = 1

    for character in line[1:]:
        if character == previous_character:
            current_repeated_sequence += 1
            longest_repeated_sequence = max(
                longest_repeated_sequence, current_repeated_sequence
            )
        else:
            current_repeated_sequence = 1
        previous_character = character

    output(f'{longest_repeated_sequence}\n')
