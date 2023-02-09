import sys


def josephus(n, k):
    if n == 1:
        return 1
    return ((josephus(n - 1, k) + k - 1) % n) + 1


def main():
    for line in sys.stdin:
        n = int(line)

        if not n:
            continue

        m = 1

        while josephus(n - 1, m) != 12:
            m += 1

        print(m)


main()
