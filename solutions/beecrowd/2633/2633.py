import heapq
import sys

for line in sys.stdin:
    n = int(line)

    if not line:
        break

    sorted_ingredients = []

    for _ in range(n):
        ingredient, days_until_expire = input().split()
        days_until_expire = int(days_until_expire)

        heapq.heappush(sorted_ingredients, (days_until_expire, ingredient))

    for i in range(n):
        if i > 0 and i < n:
            print(" ", end="")
        print(heapq.heappop(sorted_ingredients)[1], end="")

    print()
