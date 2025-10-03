import sys

input = sys.stdin.readline
output = sys.stdout.write


def is_signature_fake(reference_signature, signature):
    count_wrong_letters = 0

    for reference_letter, letter in zip(reference_signature, signature):
        if reference_letter != letter:
            count_wrong_letters += 1

        if count_wrong_letters > 1:
            return True

    return False


while line := input():
    if line.strip() == '0':
        break

    reference_signatures = {}

    n = int(line)
    for _ in range(n):
        name, signature = input().strip().split()
        reference_signatures[name] = signature

    count_fake_signatutes = 0

    m = int(input())
    for _ in range(m):
        name, signature = input().strip().split()

        if is_signature_fake(reference_signatures[name], signature):
            count_fake_signatutes += 1

    output(f'{count_fake_signatutes}\n')
