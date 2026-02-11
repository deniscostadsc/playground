import sys

input = sys.stdin.readline
output = sys.stdout.write

commands = [0] * 101

t = int(input())

for _ in range(t):
    position = 0

    n = int(input())
    for i in range(1, n + 1):
        command, *args = input().split()
        match [command, *args]:
            case ['LEFT']:
                position -= 1
                commands[i] = -1
            case ['RIGHT']:
                position += 1
                commands[i] = 1
            case ['SAME', _, index]:
                position += commands[int(index)]
                commands[i] = commands[int(index)]

    output(f'{position}\n')
