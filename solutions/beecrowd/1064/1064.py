import sys

s = 0
c = 0
for line in sys.stdin:
    n = float(line)
    if n > 0:
        s += n
        c += 1

print(f'{c} valores positivos')
print(f'{s / c:.1f}')
