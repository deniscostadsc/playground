word_index = 0
storage_index = 0
storage = [0] * 30000


def brainfuck(program, word):
    global word_index
    global storage
    global storage_index

    program_index = 0

    while program_index < len(program):
        if program[program_index] == '>':
            storage_index += 1

        elif program[program_index] == '<':
            storage_index -= 1

        elif program[program_index] == '+':
            storage[storage_index] += 1

        elif program[program_index] == '-':
            storage[storage_index] -= 1

        elif program[program_index] == '.':
            print(chr(storage[storage_index]), end='')

        elif program[program_index] == ',':
            if word_index >= len(word):
                storage[storage_index] = 0
            else:
                storage[storage_index] = ord(word[word_index])
                word_index += 1

        elif program[program_index] == '[':
            loop_block_code = ''
            bracket_levels = 1

            program_index += 1

            while True:
                if program[program_index] == '[':
                    bracket_levels += 1

                if program[program_index] == ']':
                    bracket_levels -= 1

                if bracket_levels == 0:
                    break

                loop_block_code += program[program_index]

                program_index += 1

            while storage[storage_index]:
                brainfuck(loop_block_code, word)

        elif program[program_index] == '#':
            print(map(chr, storage[:10]), end='')

        program_index += 1


def main():
    global word_index
    global storage_index
    global storage

    test_count = int(input())
    instance_count = 1

    for _ in range(test_count):
        _ = input()
        word = input()
        program = input()

        word_index = 0
        storage_index = 0
        storage = [0] * 30000

        print(f'Instancia {instance_count}')
        brainfuck(program, word)
        print('\n')

        instance_count += 1


main()
