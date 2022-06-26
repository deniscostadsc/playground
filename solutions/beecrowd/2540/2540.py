import sys

for line in sys.stdin:
    n = int(line)
    minimum_votes_for_impeachment = (n / 3) * 2
    pro_impeachment_count = 0

    for v in map(int, input().split()):
        if v == 1:
            pro_impeachment_count += 1

    if pro_impeachment_count >= minimum_votes_for_impeachment:
        print('impeachment')
    else:
        print('acusacao arquivada')
