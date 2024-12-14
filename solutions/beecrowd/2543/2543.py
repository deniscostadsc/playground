import sys

for line in sys.stdin:
    n, university_id = map(int, line.split())

    contra_strike_gameplay_count = 0
    for _ in range(n):
        _id, gameplay = map(int, input().split())
        if _id == university_id and gameplay == 0:
            contra_strike_gameplay_count += 1
    print(contra_strike_gameplay_count)
