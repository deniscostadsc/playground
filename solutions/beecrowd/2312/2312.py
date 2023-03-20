import heapq
import sys

test_cases = int(input())

countries = []

for line in sys.stdin:
    country, gold, silver, bronze = line.strip().split()
    heapq.heappush(
        countries, (-int(gold), -int(silver), -int(bronze), country)
    )

for _ in range(test_cases):
    gold, silver, bronze, country = heapq.heappop(countries)
    print(country, abs(gold), abs(silver), abs(bronze))
