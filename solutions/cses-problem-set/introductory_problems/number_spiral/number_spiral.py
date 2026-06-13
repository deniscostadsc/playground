import sys

input = sys.stdin.readline
output = sys.stdout.write

t = int(input())

for _ in range(t):
    x, y = map(int, input().split())

    max_coordinates = max(x, y)
    min_number = (max_coordinates - 1) ** 2 + 1
    max_number = max_coordinates**2

    if max_coordinates % 2 == 0:
        if y > x:
            output(f'{min_number + (x - 1)}\n')
        else:
            output(f'{max_number - y + 1}\n')
    else:
        if y > x:
            output(f'{max_number - (x - 1)}\n')
        else:
            output(f'{min_number + (y - 1)}\n')
