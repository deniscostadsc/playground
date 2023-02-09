import sys


def main():
    for line in sys.stdin:
        a, b = map(int, line.split())

        if a % b == 0 or b % a == 0:
            print('Sao Multiplos')
        else:
            print('Nao sao Multiplos')


main()
