import sys

input = sys.stdin.readline
output = sys.stdout.write

s = 0.0
c = 0

while c < 2:
    n = float(input())
    if n >= 0.0 and n <= 10.0:
        c += 1
        s += n
    else:
        output('nota invalida\n')

output(f'media = {s / 2.0:.2f}\n')
