import sys

for line in sys.stdin:
    people_in_line = list(map(int, input().split()))
    _ = input()
    people_who_left_line = set(map(int, input().split()))
    people_that_remained_in_line = set(people_in_line) - people_who_left_line

    first_person = True
    for person in people_in_line:
        if person in people_that_remained_in_line:
            if not first_person:
                print(' ', end='')
            print(person, end='')
            first_person = False
    print()
