import sys

input = sys.stdin.readline
output = sys.stdout.write

n = int(input())


for _ in range(n):
    sequence = input().strip()

    q = int(input())

    for _ in range(q):
        subsequence = input().strip()
        is_subsequence = False
        subsequence_index = 0

        for char in sequence:
            if subsequence[subsequence_index] == char:
                subsequence_index += 1
            if subsequence_index == len(subsequence):
                is_subsequence = True
                break

        if is_subsequence:
            output('Yes\n')
        else:
            output('No\n')
