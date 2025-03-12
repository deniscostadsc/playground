import sys

count = 0
for line in sys.stdin:
    if int(line) % 2 == 0:
        count += 1

print(f'{count} valores pares')
