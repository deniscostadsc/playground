import sys


def compute_kmp_list(substring, kmp_list):
    current_prefix_index = 0
    index = 1

    while index < len(substring):
        if substring[index] == substring[current_prefix_index]:
            current_prefix_index += 1
            kmp_list[index] = current_prefix_index
            index += 1
        else:
            if current_prefix_index != 0:
                current_prefix_index = kmp_list[current_prefix_index - 1]
            else:
                kmp_list[index] = 0
                index += 1


def is_substring(string, substring):
    kmp_list = [0] * len(substring)
    string_index = 0
    substring_index = 0

    compute_kmp_list(substring, kmp_list)

    while string_index < len(string) and substring_index < len(substring):
        if string[string_index] == substring[substring_index]:
            string_index += 1
            substring_index += 1
        else:
            if substring_index != 0:
                substring_index = kmp_list[substring_index - 1]
            else:
                string_index += 1

    return substring_index == len(substring)


def main():
    for dna in sys.stdin:
        dna_code = input()

        if is_substring(dna, dna_code):
            print('Resistente')
        else:
            print('Nao resistente')


main()
