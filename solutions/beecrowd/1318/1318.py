import sys

input = sys.stdin.readline
output = sys.stdout.write

while line := input().strip():
    t, p = map(int, line.split())

    if t == p == 0:
        break

    tickets_count = [0] * (t + 1)

    fake_tickets_count = 0
    tickets = list(map(int, input().split()))

    for ticket in tickets:
        if tickets_count[ticket] == 1:
            fake_tickets_count += 1
        tickets_count[ticket] += 1

    output(f'{fake_tickets_count}\n')
