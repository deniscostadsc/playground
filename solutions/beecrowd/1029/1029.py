fibs = [0] * 40
calls = [0] * 40


def fibonacci(n):
    global fibs, calls

    if n <= 1:
        fibs[n] = n
        calls[n] = 0
    else:
        if fibs[n] != 0:
            return fibs[n]
        fibs[n] = fibonacci(n - 1) + fibonacci(n - 2)
        calls[n] = calls[n - 1] + calls[n - 2] + 2

    return fibs[n]


i = int(input())

for _ in range(i):
    n = int(input())
    fibonacci_result = fibonacci(n)
    calls_count = calls[n]
    print(f'fib({n}) = {calls_count} calls = {fibonacci_result}')
