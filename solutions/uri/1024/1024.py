import sys

n = int(sys.stdin.readline())

for _ in range(n):
    original_str = sys.stdin.readline().strip()
    reversed_str = original_str[::-1]

    listed_str = list(reversed_str)

    for i, letter in enumerate(reversed_str):
        if (ord(letter) >= 65 and ord(letter) <= 90) or (
            ord(letter) >= 97 and ord(letter) <= 122
        ):
            listed_str[i] = chr(ord(listed_str[i]) + 3)

        if i >= len(reversed_str) // 2:
            listed_str[i] = chr(ord(listed_str[i]) - 1)

    print("".join(listed_str))
