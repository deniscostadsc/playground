import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n, m = map(int, line.split())

    open_tabs = n

    for _ in range(m):
        command = input().strip()

        if command == 'fechou':
            open_tabs += 1
        else:
            open_tabs -= 1

        if open_tabs < 0:
            open_tabs = 0

    output(f'{open_tabs}\n')
