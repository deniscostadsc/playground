import sys
from string import ascii_uppercase

input = sys.stdin.readline
output = sys.stdout.write

alphabet_index = dict(
    (letter, index) for index, letter in enumerate(ascii_uppercase)
)

n = int(input())

for _ in range(n):
    lines = int(input())
    sum = 0
    for current in range(lines):
        word = input().strip()
        for index, letter in enumerate(word):
            sum += alphabet_index[letter] + current + index

    output(f'{sum}\n')
