import sys

for line in sys.stdin:

    start_hours, start_minutes, end_hours, end_minutes = map(int, line.split())

    if start_hours == end_hours and start_minutes == end_minutes:
        print('O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)')
        continue

    durantion_hours = end_hours - start_hours
    if durantion_hours < 0:
        durantion_hours += 24

    durantion_minutes = end_minutes - start_minutes
    if durantion_minutes < 0:
        durantion_minutes += 60
        durantion_hours -= 1

    if durantion_hours < 0:
        durantion_hours += 24

    print(
        f'O JOGO DUROU {durantion_hours} HORA(S) E {durantion_minutes} MINUTO(S)'
    )
