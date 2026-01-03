import sys

input = sys.stdin.readline
output = sys.stdout.write

p = n = e = o = 0

for _ in range(5):
    x = int(input())

    if x < 0:
        n += 1
    elif x > 0:
        p += 1
    if x % 2 == 0:
        e += 1
    else:
        o += 1

output(f'{e} valor(es) par(es)\n');
output(f'{o} valor(es) impar(es)\n');
output(f'{p} valor(es) positivo(s)\n');
output(f'{n} valor(es) negativo(s)\n');
