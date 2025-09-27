import sys

input = sys.stdin.readline
output = sys.stdout.write

t = int(input())

for testcase_index in range(1, t + 1):
    n, m = map(int, input().split())

    reindeers_selected = []
    for _ in range(n):
        name, weight, age, height = input().strip().split()
        weight, age = int(weight), int(age)
        height = float(height)
        reindeers_selected.append((-weight, age, height, name))

    reindeers_selected.sort()

    output(f'CENARIO {{{testcase_index}}}\n')

    for reindeer_index in range(m):
        *_, name = reindeers_selected[reindeer_index]
        output(f'{reindeer_index + 1} - {name}\n')
