import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())
biggest_m, biggest_grade = input().split()
biggest_m, biggest_grade = int(biggest_m), float(biggest_grade)

for _ in range(n - 1):
    m, grade = input().split()
    m, grade = int(m), float(grade)

    if grade > biggest_grade:
        biggest_m = m
        biggest_grade = grade

if biggest_grade < 8.0:
    output('Minimum note not reached\n')
else:
    output(f'{biggest_m}\n')
