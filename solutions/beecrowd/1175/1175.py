import sys

input = sys.stdin.readline
output = sys.stdout.write

array = []
for _ in range(20):
    array.append(int(input()))

for index, number in enumerate(array[::-1]):
    output(f'N[{index}] = {number}\n')
