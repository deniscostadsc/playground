import sys

memoized_fibonacci = [0] * 41


def fibonacci(n):
    global memoized_fibonacci

    if memoized_fibonacci[n] != 0:
        return memoized_fibonacci[n]

    if n in (1, 2):
        memoized_fibonacci[n] = 1
    else:
        memoized_fibonacci[n] = fibonacci(n - 1) + fibonacci(n - 2)

    return memoized_fibonacci[n]


for line in sys.stdin:
    for i in range(int(line), 0, -1):
        print(str(fibonacci(i)), end='')
        if i == 1:
            print()
        else:
            print(' ', end='')
