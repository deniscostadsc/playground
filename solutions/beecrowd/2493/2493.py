import sys

input = sys.stdin.readline
output = sys.stdout.write


def operation_works(name, index, operation, expressions):
    x, y, z = expressions[index - 1]

    if operation == '+':
        return x + y == z
    elif operation == '-':
        return x - y == z
    elif operation == '*':
        return x * y == z
    else:
        return not x + y == z and not x - y == z and not x * y == z


while line := input().strip():
    n = int(line)

    expressions = []
    for _ in range(n):
        x, rest = input().split()
        x = int(x)
        y, z = map(int, rest.split('='))

        expressions.append((x, y, z))

    names_who_failed = []
    for _ in range(n):
        name, index, operation = input().split()
        if not operation_works(name, int(index), operation, expressions):
            names_who_failed.append(name)

    if len(names_who_failed) == n:
        output('None Shall Pass!\n')
    elif not names_who_failed:
        output('You Shall All Pass!\n')
    else:
        output(f'{" ".join(sorted(names_who_failed))}\n')
