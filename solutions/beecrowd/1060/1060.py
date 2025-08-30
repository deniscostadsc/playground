import sys

c = 0
for line in sys.stdin:
    n = float(line)
    if n > 0:
        c += 1

print(f'{c} valores positivos')
