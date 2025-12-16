import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    a, b = map(int, line.split())
    if a == b:
        break

    if a < b:
        output('Crescente\n')
    else:
        output('Decrescente\n')
