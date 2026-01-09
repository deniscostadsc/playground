import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    _ = int(line)
    fastest = max(map(int, input().split()))

    if fastest < 10:
        output('1\n')
    elif fastest < 20:
        output('2\n')
    else:
        output('3\n')
