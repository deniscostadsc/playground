import sys

input = sys.stdin.readline
output = sys.stdout.write


def dec2hex(dec_value):
    hex_digits = '0123456789ABCDEF'

    hex_value = ''
    while dec_value:
        hex_value = hex_digits[int(dec_value % len(hex_digits))] + hex_value
        dec_value //= len(hex_digits)

    return hex_value


while line := input().strip():
    v = int(line)

    output(f'{dec2hex(v)}\n')
