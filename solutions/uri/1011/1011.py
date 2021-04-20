import sys
from math import pow

PI = 3.14159

for line in sys.stdin:
    r = int(line)
    print(f"VOLUME = {4.0 / 3.0 * PI * pow(r, 3):.3f}")
