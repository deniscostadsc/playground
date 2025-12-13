import sys

input = sys.stdin.readline
output = sys.stdout.write

while alphabet := input().strip():
    _ = input()

    letter_indexes = map(int, input().split())

    for index in letter_indexes:
        output(f'{alphabet[index - 1]}')
    output('\n')
