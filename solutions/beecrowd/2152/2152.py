import sys

input = sys.stdin.readline
output = sys.stdout.write

test_cases = int(input())

for _ in range(test_cases):
    h, m, o = map(int, input().split())
    output(f'{h:02d}:{m:02d} - A porta {"abriu" if o == 1 else "fechou"}!\n')
