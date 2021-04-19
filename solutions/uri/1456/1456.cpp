#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>

char store[30000];
int pointer, word_index;

void brainfuck(std::string program, std::string word) {
    int j, brackets_level;
    unsigned int i;
    std::string inner_code;

    for (i = 0; i < program.size(); i++) {
        switch (program[i]) {
            case '>':
                pointer++;
                break;
            case '<':
                pointer--;
                break;
            case '+':
                store[pointer]++;
                break;
            case '-':
                store[pointer]--;
                break;
            case '.':
                std::cout << store[pointer];
                break;
            case ',':
                if (word_index >= static_cast< int >(word.size())) {
                    store[pointer] = 0;
                } else {
                    store[pointer] = word[word_index];
                    word_index++;
                }
                break;
            case '[':
                brackets_level = 1;
                inner_code = "";

                i++;

                while (1) {
                    if (program[i] == '[') {
                        brackets_level++;
                    } else if (program[i] == ']') {
                        brackets_level--;
                    }

                    if (brackets_level == 0) {
                        break;
                    }
                    inner_code += program[i];

                    i++;
                }

                while (store[pointer] != 0) {
                    brainfuck(inner_code, word);
                }

                break;
            case '#':
                for (j = 0; j < 10; j++) {
                    std::cout << store[j];
                }
                break;
        }
    }
}

int main() {
    int n, nn;
    std::string word;
    std::string program;
    std::cin >> n;

    nn = 1;

    while (nn <= n) {
        pointer = 0;
        word_index = 0;
        memset(store, 0, sizeof(store));

        std::cin >> word;
        std::cin >> program;

        std::cout << "Instancia " << nn++ << std::endl;
        brainfuck(program, word);
        std::cout << std::endl << std::endl;
    }

    return 0;
}
