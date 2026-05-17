import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    h, e, a, o, w, x = map(int, line.split())

    if h + e + a + x >= o + w:
        output('Middle-earth is safe.\n')
    else:
        output('Sauron has returned.\n')
