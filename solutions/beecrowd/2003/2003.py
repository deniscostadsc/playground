import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    hour, minute = map(int, line.split(':'))

    if hour < 7:
        delay = 0
    elif hour == 7:
        delay = minute
    else:
        delay = minute + (hour - 7) * 60

    output(f'Atraso maximo: {delay}\n')
