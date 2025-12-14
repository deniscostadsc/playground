import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    a, b, c = map(int, line.split())

    is_happy = False
    if a > b and b <= c:
        is_happy = True
    elif a < b and b < c and b - a <= c - b:
        is_happy = True
    elif a > b and b > c and a - b > b - c:
        is_happy = True
    elif a == b and b < c:
        is_happy = True

    if is_happy:
        output(':)\n')
    else:
        output(':(\n')
