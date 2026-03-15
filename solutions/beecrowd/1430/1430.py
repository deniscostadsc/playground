import sys

input = sys.stdin.readline
output = sys.stdout.write

duration = {
    'W': 64,
    'H': 32,
    'Q': 16,
    'E': 8,
    'S': 4,
    'T': 2,
    'X': 1,
}

while line := input().strip():
    if line == '*':
        break

    count = 0
    acum = 0

    for note in line:
        if note == '/':
            if acum == 64:
                count += 1
            acum = 0
        else:
            acum += duration[note]

    output(f'{count}\n')
