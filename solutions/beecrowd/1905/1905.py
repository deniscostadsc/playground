t = int(input())


def can_leave_maze(maze):
    if maze[0][0] == 1:
        return False

    to_visit = [(0, 0)]
    marked_to_visit = {(0, 0): 1}

    while to_visit:
        current = to_visit.pop()
        to_visit_from_current = (
            (current[0] - 1, current[1]),
            (current[0], current[1] - 1),
            (current[0] + 1, current[1]),
            (current[0], current[1] + 1),
        )

        for x, y in to_visit_from_current:
            if (
                x in (-1, 5)
                or y in (-1, 5)
                or maze[x][y] == 1
                or (x, y) in marked_to_visit
            ):
                continue

            if x == 4 and y == 4:
                return True

            to_visit.append((x, y))
            marked_to_visit[(x, y)] = 1

    return False


for _ in range(t):
    # It seems the input is not regular on beecrowd.
    # Sometimes it has blank lines and sometimes doesn't
    maze = []
    while len(maze) != 5:
        line = input().strip()
        if line:
            maze.append(list(map(int, line.split())))

    if can_leave_maze(maze):
        print('COPS')
    else:
        print('ROBBERS')
