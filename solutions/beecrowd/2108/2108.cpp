#include <cstdint>
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int16_t count_characters;
    std::string line, word, biggest_word;

    bool first_word;

    while (getline(std::cin, line)) {
        if (line == "0") {
            break;
        }

        count_characters = 0;

        std::stringstream s_line(line);
        while (std::getline(s_line, word, ' ')) {
            if (!first_word) {
                std::cout << '-';
            }
            if (word.length() >= biggest_word.length()) {
                biggest_word = word;
            }

            std::cout << word.length();
            first_word = false;
        }
        std::cout << '\n';

        first_word = true;
    }

    std::cout << "\nThe biggest word: " << biggest_word << '\n';

    return 0;
}
