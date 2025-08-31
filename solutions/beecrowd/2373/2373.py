n = int(input())
broken_glasses = 0

for _ in range(n):
    l, c = map(int, input().split())
    if l > c:
        broken_glasses += c

print(broken_glasses)
