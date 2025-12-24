import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())
xs = list(map(int, input().split()))

min_x = min(xs)
index = xs.index(min_x)

output(f'Menor valor: {min_x}\n')
output(f'Posicao: {index}\n')
