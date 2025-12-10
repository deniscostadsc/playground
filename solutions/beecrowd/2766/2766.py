import sys

input = sys.stdin.readline
output = sys.stdout.write

while name := input().strip():
    for i in range(1, 10):
        name = input().strip()

        if i == 2 or i == 6 or i == 8:
            output(f'{name}\n')
