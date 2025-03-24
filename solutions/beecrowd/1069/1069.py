n = int(input())

for _ in range(n):
    count_diamonds = 0
    open_structures = 0

    line = input()

    for item in line:
        if item == '<':
            open_structures += 1
        elif item == '>' and open_structures - 1 >= 0:
            open_structures -= 1
            count_diamonds += 1

    print(count_diamonds)
