import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    p, j1, j2, r, a = map(int, line.split())

    if (p == 1 and (j1 + j2) % 2 == 0) or (p == 0 and (j1 + j2) % 2 == 1):
        winner = 1
    else:
        winner = 2

    if r == 1 and a == 1:
        winner = 2
    elif r == 0 and a == 1:
        winner = 1
    elif r == 1:
        winner = 1

    output(f'Jogador {winner} ganha!\n')
