import sys

sys.setrecursionlimit(10002)


def josephus(n: int, k: int) -> int:
    if n == 1:
        return 1

    return ((josephus(n - 1, k) + k - 1) % n) + 1


_ = input()

i: int
line: str
for i, line in enumerate(sys.stdin):
    n: int
    k: int
    n, k = map(int, line.split())

    print(f'Case {i + 1}: {josephus(n, k)}')
