import sys

h = 0
m = 0

for t in sys.stdin:
    t = int(t)

    if t >= 60 * 60:
        h = t // (60 * 60)
        t %= 60 * 60

    if t >= 60:
        m = t // 60
        t %= 60

    print(f"{h}:{m}:{t}")

    h = 0
    m = 0
