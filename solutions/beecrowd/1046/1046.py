start, end = map(int, input().split())

if start == end:
    result = 24
elif end - start >= 0:
    result = end - start
else:
    result = 24 + end - start

print(f'O JOGO DUROU {result} HORA(S)')
