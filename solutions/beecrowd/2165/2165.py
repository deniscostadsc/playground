import sys

input = sys.stdin.readline
output = sys.stdout.write

sentence = input()

if len(sentence) <= 141:
    output('TWEET\n')
else:
    output('MUTE\n')
