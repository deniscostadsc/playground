import sys

input = sys.stdin.readline
output = sys.stdout.write


def blink2int(blink):
    blink2int_table = {
        '---': 0,
        '--*': 1,
        '-*-': 2,
        '-**': 3,
        '*--': 4,
        '*-*': 5,
        '**-': 6,
        '***': 7,
    }

    return blink2int_table[blink]


sum = 0
while line := input().strip():
    if line == 'caw caw':
        output(f'{sum}\n')
        sum = 0
    else:
        sum += blink2int(line)
