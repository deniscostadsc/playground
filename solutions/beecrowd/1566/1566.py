import heapq
import sys

input = sys.stdin.readline
output = sys.stdout.write

MAX_HEIGHT = 231

nc = int(input())

for _ in range(nc):
    _ = input()
    heights_counting = [0] * MAX_HEIGHT
    heights_sorted = []

    line = input()
    height = 0
    for char in line:
        if char in [' ', '\n']:
            heights_counting[height] += 1
            if heights_counting[height] == 1:
                heapq.heappush(heights_sorted, height)
            height = 0
        else:
            height = height * 10 + int(char)

    first = True
    while heights_sorted:
        height = heapq.heappop(heights_sorted)
        count = heights_counting[height]
        for _ in range(count):
            if not first:
                output(' ')
            output(f'{height}')
            first = False

    output('\n')
