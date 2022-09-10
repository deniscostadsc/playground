import sys

for line in sys.stdin:
    n, m = map(int, line.split())
    players_count = 0

    for _ in range(n):
        if all(map(int, input().split())):
            players_count += 1

    print(players_count)
