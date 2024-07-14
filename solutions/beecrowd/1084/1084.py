import sys

for line in sys.stdin:
    n, d = map(int, line.split())

    if not n and not d:
        break

    prize_initial = input()
    prize_final = []

    for index, digit in enumerate(prize_initial):
        if not prize_final:
            prize_final.append(digit)
        else:
            while (
                prize_final
                and digit > prize_final[-1]
                and n - index + len(prize_final) > n - d
            ):
                prize_final.pop()
            if len(prize_final) < n - d:
                prize_final.append(digit)

    print(''.join(prize_final))
