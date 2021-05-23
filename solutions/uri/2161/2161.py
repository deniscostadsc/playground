import sys

def sqrtt(number):
    result = 0.0

    for _ in range(number):
        result = 1 / (6 + result)

    return result + 3

for line in sys.stdin:
    number = int(line)
    print(f"{sqrtt(number):.10f}")
