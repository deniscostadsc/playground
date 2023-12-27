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

    while d:
        possibilities = [remove(prize, i) for i, _ in enumerate(prize)]
        possibilities.sort(key=int)
        prize = possibilities[-1]

        d -= 1

    print(prize)
