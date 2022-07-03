import sys

for n in sys.stdin:
    k = int(input())

    competitors_points = [int(input()) for _ in range(int(n))]
    competitors_points.sort(reverse=True)

    print(
        len([i for i in competitors_points if i >= competitors_points[k - 1]])
    )
