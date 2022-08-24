import sys

for line in sys.stdin:
    monica_age = int(line)
    first_son = int(input())
    second_son = int(input())

    print(max(first_son, second_son, monica_age - first_son - second_son))
