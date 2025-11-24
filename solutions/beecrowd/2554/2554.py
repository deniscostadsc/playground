import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    found = False
    n, d = map(int, line.split())

    for _ in range(d):
        date, *people = input().split()
        people = map(int, people)

        if all(people) and not found:
            output(f'{date}\n')
            found = True

    if not found:
        output('Pizza antes de FdI\n')
