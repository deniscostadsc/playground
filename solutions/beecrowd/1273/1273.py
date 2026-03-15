import sys

input = sys.stdin.readline
output = sys.stdout.write

first_test_case = True

while line := input().strip():
    n = int(line)
    if n == 0:
        break

    if first_test_case:
        first_test_case = False
    else:
        output('\n')

    greatest_length = 0

    words = []
    for _ in range(n):
        word = input().strip()
        greatest_length = max(greatest_length, len(word))
        words.append(word)

    for word in words:
        output(f'{word:>{greatest_length}}\n')
