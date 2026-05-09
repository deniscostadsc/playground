#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    std::string line;
    int16_t letter_index, next_p;

    while (std::getline(std::cin, line)) {
        letter_index = 0;
        next_p = 0;

        for (char letter : line) {
            if (letter == ' ') {
                next_p += 1;
                std::cout << " ";
            } else if (letter_index != next_p) {
                std::cout << letter;
            } else {
                next_p += 2;
            }
            letter_index += 1;
        }

        std::cout << '\n';
    }

    return 0;
}
