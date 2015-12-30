def msp(f):
    previous_line = f.readline().strip().split()
    previous_line = [int(i) for i in previous_line]

    for line in f.readlines():
        line = [int(i) for i in line.split()]

        for index, number in enumerate(line):
            previous_line[index] = (
                max(previous_line[index], previous_line[index + 1]) + number)

    return previous_line[0]


with open('triangle.txt', 'r') as f:
    print(msp(f))
