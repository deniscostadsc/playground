import heapq
import math
import sys

for line in sys.stdin:
    number = int(line)
    divisors = []
    found_divisors = set()

    for possible_divisor in range(1, int(math.sqrt(number)) + 1):
        if number % possible_divisor == 0:
            found_divisors.add(possible_divisor)
            heapq.heappush(divisors, possible_divisor)

            if number // possible_divisor not in found_divisors:
                found_divisors.add(number // possible_divisor)
                heapq.heappush(divisors, number // possible_divisor)

    while divisors:
        print(heapq.heappop(divisors))
