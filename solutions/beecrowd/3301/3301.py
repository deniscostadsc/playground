import sys

for line in sys.stdin:
    huguinho, zezinho, luisinho = map(int, line.split())
    _, middle_nephew, _ = sorted([huguinho, zezinho, luisinho])
    if middle_nephew == huguinho:
        print('huguinho')
    if middle_nephew == zezinho:
        print('zezinho')
    if middle_nephew == luisinho:
        print('luisinho')
