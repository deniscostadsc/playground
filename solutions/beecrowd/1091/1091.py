import sys

for line in sys.stdin:
    k = int(line)

    if not k:
        break

    n, m = map(int, input().split())

    for _ in range(k):
        x, y = map(int, input().split())
        if x > n and y > m:
            print('NE')
        elif x < n and y > m:
            print('NO')
        elif x < n and y < m:
            print('SO')
        elif x > n and y < m:
            print('SE')
        else:
            print('divisa')
