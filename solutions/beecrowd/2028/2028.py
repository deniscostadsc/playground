import sys

input = sys.stdin.readline
output = sys.stdout.write


def sum_all_number_until(n):
    return (n * (n + 1)) // 2 + 1


case_index = 1
while line := input().strip():
    n = int(line)
    range_sum = sum_all_number_until(n)
    output(
        f'Caso {case_index}: {range_sum} {"numero" if range_sum == 1 else "numeros"}\n'
    )

    output('0')
    for i in range(1, n + 1):
        for _ in range(1, i + 1):
            output(f' {i}')
    output('\n\n')

    case_index += 1
