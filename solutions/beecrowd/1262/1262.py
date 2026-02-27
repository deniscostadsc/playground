import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    clocks = 0
    read = 0
    proc = int(input().strip())

    for index, character in enumerate(line):
        if character == 'W':
            clocks += 1
        else:
            read += 1

        if character == 'W' or index == len(line) - 1:
            if read:
                clocks += read // proc
                if not read % proc == 0:
                    clocks += 1
                read = 0

    output(f'{clocks}\n')
