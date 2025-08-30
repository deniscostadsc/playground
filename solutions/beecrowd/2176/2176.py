import sys

for line in sys.stdin:
    suffix = '0' if line.count('1') % 2 == 0 else '1'
    print(f'{line.strip()}{suffix}')
