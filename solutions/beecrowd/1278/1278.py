n = int(input())
first = True

while n:
    longest_sentence = -1
    sentences = []

    if not first:
        print()

    for _ in range(n):
        sentence = ' '.join(input().strip().split())
        longest_sentence = max(longest_sentence, len(sentence))
        sentences.append(sentence)

    for sentence in sentences:
        print(sentence.rjust(longest_sentence))

    n = int(input())
    first = False
