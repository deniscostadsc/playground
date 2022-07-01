import sys

for line in sys.stdin:
    first_variable = line.strip()
    second_variable = input().strip()
    third_variable = input().strip()

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
