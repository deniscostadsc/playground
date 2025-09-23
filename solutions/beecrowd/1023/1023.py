import heapq
import sys

input = sys.stdin.readline
output = sys.stdout.write
first_test_case = True
index = 1

while True:
    line = input().strip()
    if not line or line == '0':
        break

    if not first_test_case:
        output('\n')
    first_test_case = False

    n = int(line)
    residents_sum = 0
    consumption_sum = 0
    average_consumption_count = {}
    sorted_keys = []

    for _ in range(n):
        data = input().split()
        residents = int(data[0])
        consumption = int(data[1])
        residents_sum += residents
        consumption_sum += consumption

        avg = consumption // residents
        if avg in average_consumption_count:
            average_consumption_count[avg] += residents
        else:
            heapq.heappush(sorted_keys, avg)
            average_consumption_count[avg] = residents

    output(f'Cidade# {index}:\n')
    index += 1

    results = []
    while sorted_keys:
        avg_consumption = heapq.heappop(sorted_keys)
        results.append(
            f'{average_consumption_count[avg_consumption]}-{avg_consumption}'
        )

    output(' '.join(results))
    output(
        f'\nConsumo medio: {int((consumption_sum/residents_sum) * 100) / 100:.2f} m3.\n'
    )
