import struct
import sys

for line in sys.stdin:
    a, b = map(float, line.split())
    a = struct.unpack('f', struct.pack('f', a))[0]
    b = struct.unpack('f', struct.pack('f', b))[0]

    c, d = map(float, input().split())

    print(f'A = {a:.6f}, B = {b:.6f}')
    print(f'C = {c:.6f}, D = {d:.6f}')

    print(f'A = {round(a, 1):.1f}, B = {round(b, 1):.1f}')
    print(f'C = {round(c, 1):.1f}, D = {round(d, 1):.1f}')

    print(f'A = {round(a, 2):.2f}, B = {round(b, 2):.2f}')
    print(f'C = {round(c, 2):.2f}, D = {round(d, 2):.2f}')

    print(f'A = {a:.3f}, B = {b:.3f}')
    print(f'C = {c:.3f}, D = {d:.3f}')

    print(f'A = {a:.3E}, B = {b:.3E}')
    print(f'C = {c:.3E}, D = {d:.3E}')

    print(f'A = {int(round(a))}, B = {int(round(b))}')
    print(f'C = {int(round(c))}, D = {int(round(d))}')
