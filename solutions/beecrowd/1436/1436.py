import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for c in range(1, n + 1):
    p = list(map(int, input().split()))

    del p[0]
    p.sort()

    output(f'Case {c}: {p[len(p) // 2]}\n')
