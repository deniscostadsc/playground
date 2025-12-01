import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)
    a, b = map(int, input().split())

    if a + b <= n:
        output('Farei hoje!\n')
    else:
        output('Deixa para amanha!\n')
