import sys

for line in sys.stdin:
    _, initial_day = line.split()
    initial_day = int(initial_day)
    initial_hour, initial_minute, initial_second = map(
        int, input().split(' : ')
    )
    _, final_day = input().split()
    final_day = int(final_day)
    final_hour, final_minute, final_second = map(int, input().split(' : '))

    delta_second = final_second - initial_second
    delta_minute = final_minute - initial_minute
    delta_hour = final_hour - initial_hour
    delta_day = final_day - initial_day

    if delta_second < 0:
        delta_second += 60
        delta_minute -= 1

    if delta_minute < 0:
        delta_minute += 60
        delta_hour -= 1

    if delta_hour < 0:
        delta_hour += 24
        delta_day -= 1

    print(f'{delta_day} dia(s)')
    print(f'{delta_hour} hora(s)')
    print(f'{delta_minute} minuto(s)')
    print(f'{delta_second} segundo(s)')
