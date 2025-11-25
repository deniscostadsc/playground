import sys

output = sys.stdout.write

s = 1.0
for i in range(2, 101):
    s += 1.0 / float(i)

output(f'{s:.2f}\n')
