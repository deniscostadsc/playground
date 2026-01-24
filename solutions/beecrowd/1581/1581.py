import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())

for _ in range(n):
    # minus 1, because we read one langage before for loop
    k = int(input()) - 1
    language = input().strip()
    previous_language = language
    all_languages_equal = True

    for _ in range(k):
        language = input().strip()

        if previous_language != language:
            all_languages_equal = False

    output(f'{language if all_languages_equal else "ingles"}\n')
