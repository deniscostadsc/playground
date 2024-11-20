n = int(input())


for _ in range(n):
    x, y = map(int, input().split())
    x, y = min(x, y), max(x, y)

    x += 1
    if x % 2 == 0:
        x += 1

    s = 0
    for odd_number in range(x, y, 2):
        s += odd_number
    print(s)
