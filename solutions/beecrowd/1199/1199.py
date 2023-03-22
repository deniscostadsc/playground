import sys

HEX_DIGITS = '0123456789ABCDEF'


def hex2dec(hexadecimal):
    decimal = 0
    base = 1

    for digit in hexadecimal.upper()[::-1]:
        decimal += HEX_DIGITS.index(digit) * base
        base *= 16

    return decimal


def dec2hex(decimal):
    if decimal // 16 > 0:
        return dec2hex(decimal // 16) + HEX_DIGITS[decimal % 16]
    return HEX_DIGITS[decimal % 16]


def main():
    for line in sys.stdin:
        number = line.strip()

        if number == '-1':
            break

        if len(line) > 2 and line[1] == 'x':
            print(hex2dec(number[2:]))
        else:
            print(f'0x{dec2hex(int(number))}')


main()
