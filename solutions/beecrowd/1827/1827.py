import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)

    for i in range(n):
        for j in range(n):
            if n % 2 == 1 and i == n // 2 and j == n // 2:
                output('4')
            elif (
                i >= n // 3
                and i < n - (n // 3)
                and j >= n // 3
                and j < n - (n // 3)
            ):
                output('1')
            elif i == j:
                output('2')
            elif i + j == n - 1:
                output('3')
            else:
                output('0')
        output('\n')
    output('\n')
