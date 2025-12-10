import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    d = int(line)
    if d <= 800:
        output('1')
    elif d <= 1400:
        output('2')
    else:
        output('3')
    output('\n')
