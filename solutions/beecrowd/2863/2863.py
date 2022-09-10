import sys

for line in sys.stdin:
    t = int(line)

    fastest_time = float('inf')

    for _ in range(t):
        fastest_time = min(fastest_time, float(input()))

    print(fastest_time)
