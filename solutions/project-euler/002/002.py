a, b = 1, 2
fib = [2]

while b < 4000000:
    a, b = b, a + b
    if b % 2 == 0:
        fib.append(b)

print(sum(fib))
