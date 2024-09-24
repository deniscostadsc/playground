import sys

for line in sys.stdin:
    if line.strip() == '0 0':
        break

    height, length = map(int, line.split())
    blocks_heights = list(map(int, input().split()))

    count_laser_moves = height - blocks_heights[0]
    previous_height = blocks_heights[0]

    for current_height in blocks_heights[1:]:
        if current_height < previous_height:
            count_laser_moves += previous_height - current_height
        previous_height = current_height

    print(count_laser_moves)
