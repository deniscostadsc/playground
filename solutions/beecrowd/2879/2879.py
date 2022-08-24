n = int(input())
winners_count = 0

for _ in range(n):
    winners_count += 1 if input() != '1' else 0

print(winners_count)
