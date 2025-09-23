import sys

input = sys.stdin.readline
output = sys.stdout.write

while True:
    line = input().strip()
    if not line:
        break
    n = int(line)

    multiple = 1
    digits = 1
    while multiple % n != 0:
        multiple = (multiple * 10 + 1) % n
        digits += 1

    output(f'{digits}\n')
