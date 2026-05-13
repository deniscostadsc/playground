import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    r = float(line)

    output(f'{3.14*2*r:.2f}\n')
