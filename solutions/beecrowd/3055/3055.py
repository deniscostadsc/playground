import sys

for grade in sys.stdin:
    grade = int(grade)
    average = int(input())

    print(average * 2 - grade)
