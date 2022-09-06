import sys

for line in sys.stdin:
    n, k = map(int, line.split())

    if n == 0 and n == 0:
        break

    questions_ids = map(int, input().split())

    id_count = {}
    faq_count = 0

    for id in questions_ids:
        if id in id_count:
            id_count[id] += 1
        else:
            id_count[id] = 1

        if id_count[id] == k:
            faq_count += 1

    print(faq_count)
