import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n, max_lines, c = map(int, line.split())

    line_count = 1
    characters = 0

    words = input().split()

    for word in words:
        if characters + len(word) <= c:
            characters += len(word) + 1
        else:
            characters = len(word) + 1
            line_count += 1

    if line_count % max_lines != 0:
        output(f'{line_count // max_lines + 1}\n')
    else:
        output(f'{line_count // max_lines}\n')
