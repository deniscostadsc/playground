import sys
import operator

for line in sys.stdin:
    limit = int(line)
    p, operation, q = input().split()
    p = int(p)
    q = int(q)

    if operation == "+":
        operation = operator.add
    else:
        operation = operator.mul

    result = operation(p, q)

    if result > limit:
        print("OVERFLOW")
    else:
        print("OK")
