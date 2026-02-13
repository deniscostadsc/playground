import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())
for _ in range(n):
    max_score = -1
    min_score = 11
    total_score = 0.0

    name = input().strip()
    difficulty = float(input())

    scores = map(float, input().split())

    for score in scores:
        total_score += score
        max_score = max(max_score, score)
        min_score = min(min_score, score)

    output(
        f'{name} {(total_score - max_score - min_score) * difficulty:.2f}\n'
    )
