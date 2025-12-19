import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

output('0')
if n == 0:
    output('\n')
else:
    a = 1
    b = 1

    for i in range(1, n):
        output(f' {a}')
        a, b = b, b + a
    output('\n')
