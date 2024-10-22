import sys


def josephus(n: int, k: int) -> int:
    result = 1
    for current_n in range(2, n + 1):
        result = (result + k - 1) % current_n + 1

    return result


_ = input()

i: int
line: str
for i, line in enumerate(sys.stdin):
    n: int
    k: int
    n, k = map(int, line.split())

    print(f'Case {i + 1}: {josephus(n, k)}')
