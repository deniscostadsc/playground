import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n, q = map(int, line.split())

    grades = []
    for _ in range(n):
        grades.append(int(input()))

    grades.sort(reverse=True)

    for _ in range(q):
        query = int(input())
        output(f'{grades[query - 1]}\n')
