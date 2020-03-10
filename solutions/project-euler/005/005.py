def gcd(x, y):
    if y == 0:
        return x
    return gcd(y, x % y)


def lcm(x, y):
    return abs(x) / gcd(x, y) * abs(y)


def lcm_many(numbers):
    result = numbers[0]

    for n in numbers:
        result = lcm(result, n)
    return result


print(int(lcm_many(range(1, 21))))
