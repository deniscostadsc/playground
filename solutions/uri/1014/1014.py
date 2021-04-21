import sys

for line in sys.stdin:
    a = float(line)
    b = float(input())

    print(f"{a / b:.3f} km/l")
