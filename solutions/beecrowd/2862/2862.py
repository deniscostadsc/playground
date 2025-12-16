import sys

input = sys.stdin.readline
output = sys.stdout.write

c = int(input())

for _ in range(c):
    energy = int(input())

    if energy > 8000:
        output('Mais de 8000!\n')
    else:
        output('Inseto!\n')
