import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)

    words = input().split()

    for index, word in enumerate(words):
        if index > 0:
            output(' ')
        if len(word) == 3:
            if word[0] == 'O' and word[1] == 'B':
                output('OBI')
                continue
            if word[0] == 'U' and word[1] == 'R':
                output('URI')
                continue
        output(f'{word}')
    output('\n')
