import sys

for line in sys.stdin:
    for index in range(1, int(line) + 1):
        print(f"resposta {index}: {input()}")
