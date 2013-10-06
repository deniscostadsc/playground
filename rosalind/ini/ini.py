import sys

text = ''.join(sys.stdin.readlines())

d = {}
for i in text:
    if i in d:
        d[i] += 1
    else:
        d[i] = 1

print d['A'], d['C'], d['G'], d['T']
