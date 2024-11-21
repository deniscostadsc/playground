import sys

for line in sys.stdin:
    if len(line.strip()) < 10:
        print('palavrinha')
    else:
        print('palavrao')
