import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    doctor_request = input().strip()

    if len(doctor_request) > len(line):
        output('no\n')
    else:
        output('go\n')
