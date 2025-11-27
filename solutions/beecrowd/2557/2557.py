import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    operation, result = line.split('=')
    first_term, second_term = operation.split('+')

    if result == 'J':
        output(f'{int(first_term) + int(second_term)}\n')
    elif first_term == 'R':
        output(f'{int(result) - int(second_term)}\n')
    else:
        output(f'{int(result) - int(first_term)}\n')
