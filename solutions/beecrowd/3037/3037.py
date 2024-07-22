n = int(input())

for _ in range(n):
    joao = 0
    for _ in range(3):
        x, d = map(int, input().split())
        joao += x * d
    maria = 0
    for _ in range(3):
        x, d = map(int, input().split())
        maria += x * d

    print('MARIA' if maria > joao else 'JOAO')
