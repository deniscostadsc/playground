import sys

lines = sys.stdin.readlines()

s = lines[0]
t = lines[1]

hamming_distance = 0

for index, letter in enumerate(s):
    if s[index] != t[index]:
        hamming_distance += 1

print(hamming_distance)
