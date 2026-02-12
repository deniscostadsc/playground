import sys
from string import ascii_lowercase

input = sys.stdin.readline
output = sys.stdout.write

letter_index = dict(
    (letter, index) for index, letter in enumerate(ascii_lowercase)
)

t = int(input())

for _ in range(t):
    operations_count = 0
    a, b = input().split()

    for letter_a, letter_b in zip(a, b):
        if letter_index[letter_a] <= letter_index[letter_b]:
            operations_count += letter_index[letter_b] - letter_index[letter_a]
        else:
            operations_count += (
                26 - letter_index[letter_a] + letter_index[letter_b]
            )

    output(f'{operations_count}\n')
