
with open('in.txt') as input_file:
    for index, line in enumerate(input_file.readlines(), 1):
        if index % 2 == 0:
            print line.replace('\n', '')
