import sys

testcase_index = 1

for line in sys.stdin:
    tickets_count = int(line)
    if tickets_count == 0:
        break

    tickets = map(int, input().split())

    print(f'Teste {testcase_index}')

    for ticket, index in enumerate(tickets, 1):
        if ticket == index:
            print(ticket)
            print()
            break

    testcase_index += 1
