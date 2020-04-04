#include <iostream>
#include <string>

int main() {
    bool is_tautogram;
    int letter, index;
    std::string lower = "abcdefghijklmnopqrstuvwxyz";
    std::string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string word;

    while (getline(std::cin, word) && word != "*") {
        is_tautogram = true;

        if (lower.find_first_of(word.at(0)) != std::string::npos) {
            letter = lower.find_first_of(word.at(0));
        } else {
            letter = upper.find_first_of(word.at(0));
        }

        size_t found = 0;

        while (word.find(' ', found) != std::string::npos) {
            found = word.find(' ', found) + 1;

            if (lower.find_first_of(word.at(found)) != std::string::npos) {
                index = lower.find_first_of(word.at(found));
            } else {
                index = upper.find_first_of(word.at(found));
            }

            if (letter != index)
                is_tautogram = false;
        }

        if (is_tautogram) {
            std::cout << "Y" << std::endl;
        } else {
            std::cout << "N" << std::endl;
        }
    }

    return 0;
}
