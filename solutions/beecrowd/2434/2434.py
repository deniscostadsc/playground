import sys

for line in sys.stdin:
    n, s = map(int, line.split())
    lowest_balance = float('infinity')
    current_balance = s
    for _ in range(n):
        activity = int(input())
        current_balance = current_balance + activity
        lowest_balance = min(lowest_balance, current_balance)
    print(lowest_balance)
