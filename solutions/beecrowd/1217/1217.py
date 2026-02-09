import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())
prices = 0
total_weight = 0

for i in range(1, n + 1):
    prices += float(input())
    weight = len(input().split())
    total_weight += weight

    output(f'day {i}: {weight} kg\n')

output(f'{total_weight / n:.2f} kg by day\n')
output(f'R$ {prices / n:.2f} by day\n')
