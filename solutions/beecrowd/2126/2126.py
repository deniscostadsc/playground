import sys


def main():
    test_case = 1

    for subsequence in sys.stdin:
        subsequence = subsequence.strip()
        sequence = input().strip()

        previous_index = 0
        index = 0
        subsequence_count = 0

        while index != -1 and previous_index < len(sequence):
            index = sequence.find(subsequence, previous_index)
            if index != -1:
                subsequence_count += 1
                previous_index = index + 1

        print(f'Caso #{test_case}:')
        if subsequence_count:
            print(f'Qtd.Subsequencias: {subsequence_count}')
            print(f'Pos: {previous_index}')
        else:
            print('Nao existe subsequencia')
        print()

        test_case += 1


main()
