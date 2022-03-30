#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::int16_t n;
    std::string word;

    while (std::cin >> n) {
        for (std::int16_t i = 0; i < n; i++) {
            if (i > 0) {
                std::cout << " ";
            }

            std::cin >> word;

            if (word.size() == 3) {
                if (word[0] == 'O' && word[1] == 'B') {
                    std::cout << "OBI";
                } else if (word[0] == 'U' && word[1] == 'R') {
                    std::cout << "URI";
                } else {
                    std::cout << word;
                }
            } else {
                std::cout << word;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
