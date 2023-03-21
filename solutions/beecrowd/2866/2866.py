import string
import sys

_ = input()

for line in sys.stdin:
    print(
        ''.join(char for char in line if char in string.ascii_lowercase)[::-1]
    )
