import sys

n = int(sys.stdin.readline())

for _ in range(n):
    a, _, b, o, c, _, d = sys.stdin.readline().split()
    a, b, c, d = map(int, [a, b, c, d])

    if o == "+":
        num = (b * d) * a // b + (b * d) * c // d
        den = b * d
    elif o == "-":
        num = (b * d) * a // b - (b * d) * c // d
        den = b * d
    elif o == "*":
        num = a * c
        den = b * d
    else:
        num = a * d
        den = b * c

    r = abs(den)
    if abs(num) < abs(den):
        r = abs(num)

    num_r = num
    den_r = den

    j = 2
    while j <= r // 2 + 1:
        if num_r % j == 0 and den_r % j == 0:
            num_r = num_r // j
            den_r = den_r // j
        else:
            j += 1

    print(f"{num}/{den} = {num_r}/{den_r}")
