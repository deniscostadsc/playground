import sys

for sentence in sys.stdin:
    splited_sentence = sentence.replace('\n', '').split(',')
    print(splited_sentence[0])
    print(','.join(splited_sentence[1:]))
