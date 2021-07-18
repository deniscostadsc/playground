import sys


def binary_search(marbles, query):
    begin = 0
    end = len(marbles) - 1
    middle = end // 2

    while begin <= end:
        if marbles[middle] < query:
            begin = middle + 1
            middle = (end + begin) // 2
        elif marbles[middle] > query or (
            middle > 0 and marbles[middle - 1] == query
        ):
            end = middle - 1
            middle = (end + begin) // 2
        else:
            return middle + 1

    return -1


case = 1

for line in sys.stdin:

    n, q = map(int, line.strip().split())

    if n == 0 and q == 0:
        break

    marbles = []

    while n:
        marble = int(sys.stdin.readline())
        marbles.append(marble)
        n -= 1

    marbles.sort()

    print(f'CASE# {case}:')

    while q:
        query = int(sys.stdin.readline())

        position = binary_search(marbles, query)

        if position == -1:
            print(f'{query} not found')
        else:
            print(f'{query} found at {position}')

        q -= 1

    case += 1
