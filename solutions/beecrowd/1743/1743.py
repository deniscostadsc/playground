import sys

input = sys.stdin.readline
output = sys.stdout.write

connector = list(map(int, input().split()))
plug = list(map(int, input().split()))

result = 1
for x, y in zip(connector, plug):
    result &= x ^ y

if result == 1:
    output('Y\n')
else:
    output('N\n')
