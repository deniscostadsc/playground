import sys

input = sys.stdin.readline
output = sys.stdout.write

for _ in sys.stdin:
    measurements = list(map(int, input().split()))

    previous_height = measurements[0]
    height = measurements[1]

    has_pattern = True
    direction = 0

    if previous_height > height:
        direction = -1
    elif previous_height < height:
        direction = 1
    else:
        has_pattern = False

    previous_height = height
    for current_height in measurements[2:]:
        if previous_height > current_height and direction == 1:
            direction = -1
        elif previous_height < current_height and direction == -1:
            direction = 1
        else:
            has_pattern = False
        previous_height = current_height

    output(f'{1 if has_pattern else 0}\n')
