from math import factorial

f = factorial(100)

s = 0
for digit in str(f):
    s += int(digit)

print s
