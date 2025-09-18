import sys

for line in sys.stdin:
    first_word = line.strip()
    second_word = input().strip()
    if first_word < second_word:
        print(first_word)
        print(second_word)
    else:
        print(second_word)
        print(first_word)
