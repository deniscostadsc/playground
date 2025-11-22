import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    sons, daughters = map(int, line.split())
    if sons == 0 and daughters == 0:
        break

    output(f'{sons + daughters}\n')
