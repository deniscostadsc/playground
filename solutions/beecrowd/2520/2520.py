import sys

for line in sys.stdin:
    n, m = map(int, line.split())
    one_x_index, two_x_index, one_y_index, two_y_index = -1, -1, -1, -1
    for y_index in range(n):
        y = input().strip().split()
        for x_index, item in enumerate(y):
            if item == '1':
                one_x_index = x_index
                one_y_index = y_index
            if item == '2':
                two_x_index = x_index
                two_y_index = y_index

    print(abs(one_x_index - two_x_index) + abs(one_y_index - two_y_index))
