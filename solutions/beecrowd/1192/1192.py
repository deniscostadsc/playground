import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    g = input().strip()
    letter = g[1]
    first_digit, second_digit = int(g[0]), int(g[2])

    if first_digit == second_digit:
        output(f'{first_digit * second_digit}\n')
    elif letter == letter.upper():
        output(f'{second_digit - first_digit}\n')
    else:
        output(f'{first_digit + second_digit}\n')
