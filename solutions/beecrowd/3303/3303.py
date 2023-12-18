import sys

for line in sys.stdin:
    if len(line) <= 10:
        print('palavrinha')
    else:
        print('palavrao')
