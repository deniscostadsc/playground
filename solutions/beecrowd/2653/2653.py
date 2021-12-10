import sys

unique_jewels = set()

for line in sys.stdin:
    unique_jewels.add(line.strip())

print(len(unique_jewels))
