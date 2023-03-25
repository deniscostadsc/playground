from functools import cmp_to_key


def mod(n, m):
    if n >= 0 or n % m == 0:
        return n % m
    return (n % m) - m


def main():
    n, m = map(int, input().split())

    while n and m:
        numbers = []

        for _ in range(n):
            numbers.append(int(input()))

        print(n, m)

        def compare(n1, n2):
            n1_mod = mod(n1, m)
            n2_mod = mod(n2, m)
            n1_is_even = n1 % 2 == 0
            n2_is_even = n2 % 2 == 0

            if n1_mod != n2_mod:
                return n1_mod - n2_mod

            if not n1_is_even and n2_is_even:
                return -1
            elif n1_is_even and not n2_is_even:
                return 1
            elif not n1_is_even and not n2_is_even:
                return n2 - n1
            else:
                return n1 - n2

        print('\n'.join(map(str, sorted(numbers, key=cmp_to_key(compare)))))

        n, m = map(int, input().split())

    print('0 0')


main()
