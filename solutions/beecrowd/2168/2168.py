import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    n = int(line)
    cameras = []

    for i in range(n + 1):
        cameras.append(list(map(int, input().split())))

    for i in range(1, n + 1):
        for j in range(1, n + 1):
            if (
                cameras[i][j]
                + cameras[i - 1][j]
                + cameras[i][j - 1]
                + cameras[i - 1][j - 1]
                >= 2
            ):
                output('S')
            else:
                output('U')
        output('\n')
