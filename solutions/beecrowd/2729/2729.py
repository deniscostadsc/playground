import sys

_ = input()

for line in sys.stdin:
    print(' '.join(sorted(set(line.strip().split()))))
