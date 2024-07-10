import sys


def remove(_str, index):
    if index == len(_str) - 1:
        return _str[:-1]
    elif index == 0:
        return _str[1:]
    return _str[:index] + _str[index + 1 :]


for line in sys.stdin:
    n, d = map(int, line.split())

    if not n and not d:
        break

    prize = input()
    current_digit = 0

    for i in range(d):
        index = prize.find(str(current_digit))
        if index == -1:
            current_digit += 1
            index = prize.find(str(current_digit))
        prize = remove(prize, index)

        d -= 1

    print(prize)
