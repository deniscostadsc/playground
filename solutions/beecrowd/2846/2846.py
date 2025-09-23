import sys
from functools import cache

input = sys.stdin.readline
output = sys.stdout.write

MAX_FIBONOT = 10**5 + 10


@cache
def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n - 1) + fibonacci(n - 2)


fibonacci_sequence = set()
current_fibonacci_index = 0
while True:
    current_fibonacci = fibonacci(current_fibonacci_index)
    fibonacci_sequence.add(current_fibonacci)
    current_fibonacci_index += 1

    if current_fibonacci >= MAX_FIBONOT:
        break

fibonot_sequence = (
    set(range(1, MAX_FIBONOT + len(fibonacci_sequence))) - fibonacci_sequence
)

fibonot_sequence_indexed = {}
for index, fibonot in enumerate(sorted(fibonot_sequence), start=1):
    fibonot_sequence_indexed[index] = fibonot

while True:
    line = input()
    if not line:
        break
    k = int(line)
    output(f'{fibonot_sequence_indexed[k]}\n')
