import sys

for line in sys.stdin:
    grade = int(line)
    average = int(input())

    print(average * 2 - grade)
