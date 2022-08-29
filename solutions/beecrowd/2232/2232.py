previous_results = {}


def sum_triangle_until_row(n):
    if n in previous_results:
        return previous_results[n]

    if n == 1:
        result = 2 ** (n - 1)
    else:
        result = 2 ** (n - 1) + sum_triangle_until_row(n - 1)

    previous_results[n] = result

    return previous_results[n]


def main():
    t = int(input())
    for _ in range(t):
        n = int(input())

        print(sum_triangle_until_row(n))


main()
