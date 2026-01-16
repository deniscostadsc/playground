import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)
    if n == 0:
        break

    results = list(map(int, input().split()))

    m = j = 0
    for result in results:
        if result == 0:
            m += 1
        else:
            j += 1

    output(f'Mary won {m} times and John won {j} times\n')
