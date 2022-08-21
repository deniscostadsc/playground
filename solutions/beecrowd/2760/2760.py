import sys

for line in sys.stdin:
    first_variable = line.replace('\n', '')
    second_variable = input().replace('\n', '')
    third_variable = input().replace('\n', '')

    print(first_variable, end='')
    print(second_variable, end='')
    print(third_variable)

    print(second_variable, end='')
    print(third_variable, end='')
    print(first_variable)

    print(third_variable, end='')
    print(first_variable, end='')
    print(second_variable)

    print(first_variable[:10], end='')
    print(second_variable[:10], end='')
    print(third_variable[:10])
