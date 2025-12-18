import sys

input = sys.stdin.readline
output = sys.stdout.write

s = float(input())

if s <= 2000.0:
    output('Isento\n')
elif s <= 3000.0:
    output(f'R$ {(s - 2000.0) * 0.08:.2f}\n')
elif s <= 4500.0:
    output(f'R$ {1000.0 * 0.08 + (s - 3000.0) * 0.18:.2f}\n')
else:
    output(f'R$ {1000.0 * 0.08 + 1500.0 * 0.18 + (s - 4500.0) * 0.28:.2f}\n')
