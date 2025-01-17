import math

LIMIT = 28123


def divisors(number):
    divisors = [1]
    for n in range(2, int(math.sqrt(number)) + 1):
        if number % n == 0:
            divisors.append(n)
            if not n == number // n:
                divisors.append(number // n)
    return divisors


def is_abundant(number):
    return number < sum(divisors(number))


abundant_numbers_below_limit = [
    i for i in range(1, LIMIT + 1) if is_abundant(i)
]

numbers_that_are_sum_of_two_abundant = set()
sum_numbers_that_are_sum_of_two_abundant = 0

for i in abundant_numbers_below_limit:
    for j in abundant_numbers_below_limit:
        if (
            i + j <= LIMIT
            and i + j not in numbers_that_are_sum_of_two_abundant
        ):
            numbers_that_are_sum_of_two_abundant.add(i + j)
            sum_numbers_that_are_sum_of_two_abundant += i + j

sum_all_numbers_below_limit = sum(range(1, LIMIT + 1))

print(sum_all_numbers_below_limit - sum_numbers_that_are_sum_of_two_abundant)
