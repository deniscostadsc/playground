import re

def is_valid_plate(plate):
    match = re.match(r'^[A-Z]{3}-\d{4}$', plate)
    return bool(match)

def get_restricted_day(plate):
    match tuple(plate):
        case [*_, '1' | '2']:
            return 'MONDAY'
        case [*_, '3' | '4']:
            return 'TUESDAY'
        case [*_, '5' | '6']:
            return 'WEDNESDAY'
        case [*_, '7' | '8']:
            return 'THURSDAY'
        case [*_, '9' | '0']:
            return 'FRIDAY'

n = int(input())
for _ in range(n):
    plate = input()
    if is_valid_plate(plate):
        print(get_restricted_day(plate))
    else:
        print('FAILURE')
