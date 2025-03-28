import sys

for sentence in sys.stdin:
    # we can't use strip because we ned to keep trailing/leading space
    splited_sentence = sentence.replace('\n', '').split(',')
    print(splited_sentence[0])
    print(','.join(splited_sentence[1:]))
