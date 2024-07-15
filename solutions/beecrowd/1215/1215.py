import bisect
import re
import sys

words_unique = set()
words_sorted = []

for line in sys.stdin:
    for word in filter(bool, re.split(r'[^a-zA-Z]', line)):
        word_lowercase = word.lower()
        if word_lowercase not in words_unique:
            words_unique.add(word_lowercase)
            bisect.insort(words_sorted, word_lowercase)

for word in words_sorted:
    print(word)
