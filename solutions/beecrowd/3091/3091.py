import sys


def main():
    for a in sys.stdin:
        a = int(a)
        b = int(input())
        print(a % b)


main()
